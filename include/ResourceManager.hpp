#pragma once

#include <SDL3/SDL.h>
#include <unordered_map>
#include <memory>
#include <string>

//Functor
struct TextureFunctorDeleter{
    void operator()(SDL_Texture* texture) const{
        SDL_DestroyTexture(texture);
    }
};

//forward declaration
std::shared_ptr<SDL_Texture> make_shared_texture(SDL_Renderer* renderer, SDL_Surface* pixels);

/// @brief Handles loading and storing sprites
struct ResourceManager{
private: 
    ResourceManager(){}
    inline static ResourceManager* mInstance{nullptr};
    std::unordered_map<std::string, std::shared_ptr<SDL_Texture>> mTextureResources;

public:
    /// @brief make sure there is only ever one instance of this class, return the instance
    /// @return 
    static ResourceManager& Instance(){
        if(nullptr==mInstance){
            mInstance = new ResourceManager;
        }
        return *mInstance;
    }

    /// @brief create new texture from specified file path and store in map that holds all loaded textures
    /// @param renderer 
    /// @param filepath 
    /// @return 
    std::shared_ptr<SDL_Texture> LoadTexture(SDL_Renderer* renderer, std::string filepath){
        //if(mTextureResources.find(filepath)!=mTextureResources.end()){
        if(!mTextureResources.contains(filepath)){
            SDL_Surface* pixels = SDL_LoadBMP(filepath.c_str());

            SDL_SetSurfaceColorKey(pixels, true, SDL_MapRGB(pixels->format, 0xFF, 0, 0xFF));
            std::shared_ptr<SDL_Texture> texture = make_shared_texture(renderer, pixels);

            mTextureResources.insert({filepath,texture});

            SDL_DestroySurface(pixels);
            SDL_Log("created Resource: %s", filepath.c_str());
        }
        
        return mTextureResources[filepath];
    }
};

