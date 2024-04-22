#pragma once
#include <SDL3/SDL.h>
#include "TextureComponent.hpp"
#include "GameEntity.hpp"
#include "ComponentType.hpp"



struct Projectile : GameEntity{
    private:
        bool mIsFiring{false};
        Uint64 timeSinceLastLaunch;
        bool mYDirectionUp{true};
        float mSpeed{250.0f};

    public:
        Projectile();

        void Launch(float x, float y, bool yDirectionisUp, int minLaunchTime=3000);

        void Update(float deltaTime) override;
        void Input(float deltaTime) override;

        
        void Render(SDL_Renderer* renderer) override;


};