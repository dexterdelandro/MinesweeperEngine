#include "GameEntity.hpp"

GameEntity::GameEntity(){

}

GameEntity::~GameEntity(){

}

void GameEntity::Input(float deltaTime){
    for(auto& [key,value]: mComponents){
        mComponents[key]->Input(deltaTime);
    }

    for(auto& children: mGameEntities){
        children->Input(deltaTime);
    }
}

void GameEntity::Update(float deltaTime){
    for(auto& [key,value]: mComponents){
        mComponents[key]->Update(deltaTime);
    }

    for(auto& children: mGameEntities){
        children->Update(deltaTime);
    }
}

void GameEntity::Render(SDL_Renderer* renderer){
    for(auto& [key,value]: mComponents){
        mComponents[key]->Render(renderer);
    }

    for(auto& children: mGameEntities){
        children->Render(renderer);
    }
}
/* dirty fix - moved to header*/
template <typename T>
void GameEntity::AddComponent(std::shared_ptr<T> c){
    mComponents[c->GetType()] = c; 
    c->SetGameEntity(GetThisPtr());
}

template <typename T>
std::shared_ptr<T> GameEntity::GetComponent(ComponentType type){
    auto found = mComponents.find(type);
    if(found!=mComponents.end()){
        return dynamic_pointer_cast<T>(found->second);
    }
    return nullptr; //to get rid of warning, could use exception or log
}
//explicit template instantiations
template void GameEntity::AddComponent<TextureComponent>(std::shared_ptr<TextureComponent> C);
// template void GameEntity::AddComponent<PositionComponent>(std::shared_ptr<PositionComponent> C);
template void GameEntity::AddComponent<TransformComponent>(std::shared_ptr<TransformComponent> C);
template void GameEntity::AddComponent<Collision2DComponent>(std::shared_ptr<Collision2DComponent> C);
template void GameEntity::AddComponent<InputComponent>(std::shared_ptr<InputComponent> C);

template std::shared_ptr<TextureComponent> GameEntity::GetComponent<TextureComponent>(ComponentType type);
// template std::shared_ptr<PositionComponent> GameEntity::GetComponent<PositionComponent>(ComponentType type);
template std::shared_ptr<TransformComponent> GameEntity::GetComponent<TransformComponent>(ComponentType type);
template std::shared_ptr<Collision2DComponent> GameEntity::GetComponent<Collision2DComponent>(ComponentType type);
template std::shared_ptr<InputComponent> GameEntity::GetComponent<InputComponent>(ComponentType type);

void GameEntity::AddChildGameEntity(std::shared_ptr<GameEntity> child){
    mGameEntities.push_back(child);
}

std::shared_ptr<GameEntity> GameEntity::GetChildGameEntityAtIndex(size_t index){
    return mGameEntities.at(index);
}

void GameEntity::AddDefaultTransform(){
    std::shared_ptr<TransformComponent> t = std::make_shared<TransformComponent>();
    AddComponent<TransformComponent>(t); 
}

std::shared_ptr<TransformComponent> GameEntity::GetTransform(){
    return GetComponent<TransformComponent>(ComponentType::TransformComponent);
}


void GameEntity::SetRenderable(bool value){
    mRenderable = value;
}

bool GameEntity::IsRenderable() const{return mRenderable;}

bool GameEntity::Intersects(std::shared_ptr<GameEntity> e){
    auto source = e->GetComponent<Collision2DComponent>(ComponentType::Collision2DComponent)->GetRectangle();
    auto us = GetComponent<Collision2DComponent>(ComponentType::Collision2DComponent)->GetRectangle();

   /*
    auto source = dynamic_pointer_cast<TextureComponent>(e->mComponents[0])->GetRectangle();
    auto us = dynamic_pointer_cast<TextureComponent>(mComponents[0])->GetRectangle();
*/

    SDL_FRect result;
    return SDL_GetRectIntersectionFloat(&source, &us, &result);
    
}


