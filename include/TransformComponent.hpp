#pragma once

#include <SDL3/SDL.h>
#include <memory>
#include <string>
#include "Component.hpp"
#include "ComponentType.hpp"

/// @brief Transform component, holds the SDL_FRect behind each GameEntity
struct TransformComponent : public Component{
    private:
		SDL_FRect mRectangle{20.0f,20.0f,32.0f,32.f};
        std::shared_ptr<SDL_Texture> mTexture;

    public:
        TransformComponent();

        ~TransformComponent();

        ComponentType GetType() override;

        void Update(float deltaTime) override;

        void Input(float deltaTime) override;



        void Render(SDL_Renderer* renderer) override;

        void SetW(float w);
        void SetH(float h);
        void SetWH(float w, float h);

        void SetX(float x);
        void SetY(float y);
        void SetXY(float x, float y);

        float GetX() const;
        float GetY() const;
        float GetW() const;
        float GetH() const;

        SDL_FRect GetRectangle() const;

};