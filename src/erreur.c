#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>

void ArretAvecErreur(const char *message);

void ArretAvecErreur(const char *message){
    SDL_Log("ERREUR : %s > %s \n", message, SDL_GetError());
    SDL_Quit();
    exit(EXIT_FAILURE);
}