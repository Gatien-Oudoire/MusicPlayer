// Pour compiler => gcc src/main.c -o bin/gla -I include -L lib -lmingw32 -lSDL2main -lSDL2

#include "erreur.h"
#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>

int main(int argc, char *argv[])
{
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;

    // démarage de SDL
    if(SDL_Init(SDL_INIT_AUDIO | SDL_INIT_VIDEO))
        ArretAvecErreur("Erreur dans l'initialisation de l'interface graphique");

    window = SDL_CreateWindow("Gatien Oudoire: Lecteur Audio", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);

    // création de la fenetreo
    if (window == NULL)
        ArretAvecErreur("Erreur dans l'initialisation de la fenetre ");


    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);  

    if (renderer == NULL)
        ArretAvecErreur("Erreur dans le rendu");

    SDL_RenderPresent(renderer);
    
    SDL_Delay(5000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return EXIT_SUCCESS;
}