#pragma once

#include <SDL3/SDL.h>
#include <memory>
#include "ComponentType.hpp"

//forward declaration
struct GameEntity;


//Components must know about their game entiity
struct Component{

public:
    Component(){

    }

    virtual ~Component(){}

    virtual void Input(float deltaTime){
        
    }

    virtual void Update(float deltaTime){
        
    }

    virtual void Render(SDL_Renderer* renderer){
            
    }

    virtual ComponentType GetType() = 0;

    void SetGameEntity(std::shared_ptr<GameEntity>g){mGameEntity = g;}
    std::shared_ptr<GameEntity> GetGameEntity(){return mGameEntity;}

private:
    std::shared_ptr<GameEntity> mGameEntity;
};