#include "PlayerGameEntity.hpp"

PlayerGameEntity::PlayerGameEntity(SDL_Renderer* renderer){

}



PlayerGameEntity::~PlayerGameEntity(){}

void PlayerGameEntity::Input(float deltaTime) {
    for(auto& [key,value]: mComponents){
        mComponents[key]->Input(deltaTime);
    }

    for(auto& children: mGameEntities){
        children->Input(deltaTime);
    }
}

void PlayerGameEntity::Update(float deltaTime) {
    for(auto& [key,value]: mComponents){
        mComponents[key]->Update(deltaTime);
    }

    for(auto& children: mGameEntities){
        children->Update(deltaTime);
    }
}

void PlayerGameEntity::Render(SDL_Renderer* renderer){
     for(auto& [key,value]: mComponents){
        mComponents[key]->Render(renderer);
    }

    for(auto& children: mGameEntities){
        children->Render(renderer);
    }
}