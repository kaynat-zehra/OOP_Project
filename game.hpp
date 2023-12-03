
#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

class Game{
    //Screen dimension constants
    const int SCREEN_WIDTH = 1000;
    const int SCREEN_HEIGHT = 600;

    //The window we'll be rendering to
    SDL_Window* gWindow = NULL;

    //The window renderer
    SDL_Renderer* gRenderer = NULL;

    //Current displayed texture
    SDL_Texture* gTexture = NULL;
    SDL_Texture* gTexture1 = NULL;
    SDL_Texture* gTexture_lose = NULL;
    SDL_Texture* gTexture_win = NULL;

    //global reference to png image sheets
    SDL_Texture* assets=NULL;
    SDL_Texture* assets2=NULL;
    Mix_Music *bgMusic = NULL;
    int gamestate=0;

public:

    bool init();
    bool loadMedia();
    void close();
    SDL_Texture* loadTexture( std::string path );
    void run();
};

