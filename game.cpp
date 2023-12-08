#include "game.hpp"
bool Game::init()
{
	//Initialization flag
	bool success = true;

	//Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{
		//Set texture filtering to linear
		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
		{
			printf( "Warning: Linear texture filtering not enabled!" );
		}

		//Create window
		gWindow = SDL_CreateWindow( "AIR_HOCKEY_GAME_OOP_PROJECT", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( gWindow == NULL )
		{
			printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
			//Create renderer for window
			gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
			if( gRenderer == NULL )
			{
				printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
				success = false;
			}
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if( !( IMG_Init( imgFlags ) & imgFlags ) )
				{
					printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
					success = false;
				}
				if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
				{
					printf( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
					success = false;
				}

			}
		}
	}

	return success;
}

bool Game::loadMedia()
{
	// //Loading success flag
	bool success = true;
	
	assets = loadTexture("objects2.png");
	assets2 = loadTexture("numbers.png");
    gTexture1 = loadTexture("startscreen.png");
    gTexture = loadTexture("background.png");
	gTexture_lose=loadTexture("screen_lose.png");
	gTexture_win=loadTexture("screen_win.png");

	if(assets==NULL || gTexture1==NULL || assets2==NULL || gTexture==NULL || gTexture_lose==NULL || gTexture_win==NULL)
    {
        printf("Unable to run due to error: %s\n",SDL_GetError());
        success =false;
    }
	bgMusic = Mix_LoadMUS( "videoplayback.wav" );

	if(bgMusic == NULL){
		printf("Unable to load music: %s \n", Mix_GetError());
		success = false;
	}
	return success;
}

void Game::close()
{
	//Free loaded images
	SDL_DestroyTexture(assets);
	assets=NULL;
	SDL_DestroyTexture(assets2);
	assets2=NULL;
	SDL_DestroyTexture(gTexture);
	SDL_DestroyTexture(gTexture1);
	SDL_DestroyTexture(gTexture_lose);
	SDL_DestroyTexture(gTexture_win);
	
	//Destroy window
	SDL_DestroyRenderer( gRenderer );
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;
	gRenderer = NULL;
	Mix_FreeMusic(bgMusic);
	bgMusic = NULL;
	//Quit SDL subsystems
	IMG_Quit();
	Mix_Quit();
	SDL_Quit();
}

SDL_Texture* Game::loadTexture( std::string path )
{
	//The final texture
	SDL_Texture* newTexture = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
	if( loadedSurface == NULL )
	{
		printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
	}
	else
	{
		//Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
		if( newTexture == NULL )
		{
			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
		}

		//Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}

	return newTexture;
}
void Game::run( )
{
	bool quit = false;
	SDL_Event e;


	while( !quit )
	{
		//Handle events on queue
		while( SDL_PollEvent( &e ) != 0 )
		{
			//User requests quit
			if( e.type == SDL_QUIT )
			{
				quit = true;
			}
			if( Mix_PlayingMusic() == 0 )
				{
					//Play the music
					Mix_PlayMusic( bgMusic, 2 );
				}
			if (gamestate == 0) {
                if (e.type == SDL_MOUSEBUTTONDOWN) {
                    int xMouse, yMouse;
                    SDL_GetMouseState(&xMouse, &yMouse);
                    AirHockey.createObject(xMouse, yMouse);
					if (xMouse>=410 && xMouse<=580 && yMouse>=420 && yMouse<=500){
						gamestate=1;
					}
                }}
			if (gamestate==1){
				std::cout << "gamestate 1\n";
				char s= AirHockey.win_or_lose(); // checks if player wins or loses.
				std::cout<<s<<'\n';
				if (s=='a'){
					gamestate=2; // changing game state to 2 if ai wins
					std::cout << "win or lose A\n";
					break;
				}	
				else if (s=='p'){ // changing game state to 2 if ai wins
					std::cout << "win or lose p\n";
					gamestate=3;
					break;
				}
				else{
					gamestate=1;
				}
			if(e.type == SDL_MOUSEBUTTONDOWN){ // checks for mouse clicks
				int xMouse, yMouse;
				SDL_GetMouseState(&xMouse,&yMouse);
				AirHockey.createObject(xMouse, yMouse);
				}
				
			if(e.type == SDL_KEYDOWN){	
					AirHockey.move(gRenderer, assets, e.key.keysym.sym);	
				}
			}
		}
		
		if (gamestate==0){ // initializes start screen
		SDL_RenderCopy(gRenderer, gTexture1, NULL, NULL);//Draws background to renderer

		}
		else if (gamestate==1)  // intializes game screen
		{
			SDL_RenderClear(gRenderer); //removes everything from renderer
			SDL_RenderCopy(gRenderer, gTexture, NULL, NULL);//Draws background to renderer
		//***********************draw the objects here********************
		
			AirHockey.drawObjects(gRenderer, assets,assets2);
			AirHockey.is_collision();
		}
		else if (gamestate==2){ // intialises you lose screen
			std::cout << "Game state 2\n";
			SDL_RenderCopy(gRenderer, gTexture_win, NULL, NULL);//Draws background to renderer

		}
		else if (gamestate==3){ // initalises you win screen
			std::cout << "game tate 3\n";
			SDL_RenderCopy(gRenderer, gTexture_lose, NULL, NULL);//Draws background to renderer

		}

		//****************************************************************
    	SDL_RenderPresent(gRenderer); //displays the updated renderer

	    SDL_Delay(200);	//causes sdl engine to delay for specified miliseconds
	}
}	

