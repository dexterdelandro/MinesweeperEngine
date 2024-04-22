#pragma once

#include <SDL3/SDL.h>
#include <memory>
#include <string>
#include "Component.hpp"
#include "ComponentType.hpp"

/// @brief component that holds the sprite of a game entity
struct TextureComponent : public Component{
    private:
		SDL_FRect mRectangle{20.0f,20.0f,32.0f,32.f};
        std::shared_ptr<SDL_Texture> mTexture;

    public:
        TextureComponent();
        void CreateTexture(SDL_Renderer *renderer, std::string filepath);

        ~TextureComponent();

        ComponentType GetType() override;

        void Update(float deltaTime) override;

        void Input(float deltaTime) override;


        void Move(float x, float y);

        void Render(SDL_Renderer* renderer) override;
};