#pragma once
#include <SDL3/SDL.h>
#include <memory>
#include "GameEntity.hpp"
#include "Projectile.hpp"
#include "TextureComponent.hpp"
#include "ComponentType.hpp"

struct EnemyGameEntity : public GameEntity{
 private:
        bool xPositiveDirection{true};
        float offset{0.0f};
        float mSpeed{100.0f};
        float minLaunchTime{5000.0f};

    public:
        EnemyGameEntity(SDL_Renderer* renderer);

        virtual ~EnemyGameEntity();

        virtual void Input(float deltaTime) override;

        virtual void Update(float deltaTime) override;

        virtual void Render(SDL_Renderer* renderer);


/*
        virtual void Render(SDL_Renderer* renderer){
            mSprite.Render(renderer);
        }
*/

};