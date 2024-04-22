#pragma once
#include <SDL3/SDL.h>
#include <memory>
#include "GameEntity.hpp"
#include "Projectile.hpp"
#include "TextureComponent.hpp"
#include "ComponentType.hpp"


struct PlayerGameEntity : public GameEntity{
 private:
        bool xPositiveDirection{true};
        float offset{0.0f};


    public:
        PlayerGameEntity(SDL_Renderer* renderer);

        virtual ~PlayerGameEntity();

        virtual void Input(float deltaTime) override;

        virtual void Update(float deltaTime) override;

        virtual void Render(SDL_Renderer* renderer);
};