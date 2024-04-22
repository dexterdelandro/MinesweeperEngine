#include "ResourceManager.hpp"

std::shared_ptr<SDL_Texture> make_shared_texture(SDL_Renderer* renderer, SDL_Surface* pixels){
    SDL_Texture* pTexture = SDL_CreateTextureFromSurface(renderer, pixels);
    if(nullptr==pTexture)SDL_Log("cant load texture\n");

    return std::shared_ptr<SDL_Texture>(pTexture, TextureFunctorDeleter());
}