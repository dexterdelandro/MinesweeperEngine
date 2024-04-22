#include "Projectile.hpp"

Projectile::Projectile(){
            timeSinceLastLaunch = SDL_GetTicks();
            mRenderable = false;
            
        }

void Projectile::Launch(float x, float y, bool yDirectionisUp, int minLaunchTime){
    if(SDL_GetTicks()-timeSinceLastLaunch > minLaunchTime){
        auto transform = GetComponent<TransformComponent>(ComponentType::TransformComponent);
        auto col = GetComponent<Collision2DComponent>(ComponentType::Collision2DComponent);
        transform->SetXY(x,y);
        col->SetXY(x,y);
        timeSinceLastLaunch = SDL_GetTicks();
        mIsFiring = true;
        mYDirectionUp = yDirectionisUp;
    }
}

void Projectile::Input(float deltaTime){
    for(auto& [key,value]: mComponents){
        mComponents[key]->Input(deltaTime);
    }
}

void Projectile::Update(float deltaTime){
    auto transform = GetComponent<TransformComponent>(ComponentType::TransformComponent);
    //auto col = GetComponent<Collision2DComponent>(ComponentType::Collision2DComponent);

    if(mIsFiring){
        mRenderable = true;

        if(mYDirectionUp){
            transform->SetY(transform->GetY() - mSpeed * deltaTime);
            
        }else{
            transform->SetY(transform->GetY() + mSpeed * deltaTime);
        }
        //col->SetY(transform->GetY());
    }else{
        mRenderable = false;
    }

    if(transform->GetY() < 0.0f || transform->GetY()>480){
        mIsFiring = false;
    }

    for(auto& [key,value]: mComponents){
        mComponents[key]->Update(deltaTime);
    }
}


void Projectile::Render(SDL_Renderer* renderer){
    if(mRenderable){

        for(auto& [key,value]: mComponents){
            mComponents[key]->Render(renderer);
        }
    }
}