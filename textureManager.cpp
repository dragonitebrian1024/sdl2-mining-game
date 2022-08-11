#include "textureManager.h"
#include "game.h"

SDL_Texture* TextureManager::LoadTexture(const char* filename, SDL_Renderer* renderer)
{
	SDL_Surface* tempsurface = IMG_Load(filename);
	SDL_Texture* tex = SDL_CreateTextureFromSurface(renderer, tempsurface);
	SDL_FreeSurface(tempsurface);

	return tex;
}