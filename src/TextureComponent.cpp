#include "TextureComponent.hpp"
#include "ResourceManager.hpp"
#include "TransformComponent.hpp"
#include "GameEntity.hpp"

TextureComponent::TextureComponent(){

}
void TextureComponent::CreateTexture(SDL_Renderer *renderer, std::string filepath){
    mTexture = ResourceManager::Instance().LoadTexture(renderer, filepath);
    
}

TextureComponent::~TextureComponent(){
    //SDL_DestroyTexture(mTexture);
}

void TextureComponent::Update(float deltaTime){
}

void TextureComponent::Input(float deltaTime){
}

void TextureComponent::Move(float x, float y){
    mRectangle.x =x;
    mRectangle.y = y;
}

void TextureComponent::Render(SDL_Renderer* renderer){
    if(nullptr==mTexture){
        auto ge = GetGameEntity();
        auto transform = ge->GetTransform()->GetRectangle();
        SDL_RenderRect(renderer, &transform);
    }else{
        auto ge = GetGameEntity();
        auto transform = ge->GetTransform()->GetRectangle();
        SDL_RenderTexture(renderer,mTexture.get(), nullptr, &transform);
    }
}

ComponentType TextureComponent::GetType(){
    return ComponentType::TextureComponent;
}
