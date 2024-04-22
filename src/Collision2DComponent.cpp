#include "Collision2DComponent.hpp"
#include "ComponentType.hpp"
#include "GameEntity.hpp"

Collision2DComponent::Collision2DComponent(){

}

Collision2DComponent::~Collision2DComponent(){
    //SDL_DestroyTexture(mTexture);
}

void Collision2DComponent::Update(float deltaTime){
    auto transform = GetGameEntity()->GetTransform();
    SetWH(transform->GetW(), transform->GetH());
    SetXY(transform->GetX(), transform->GetY());
}

void Collision2DComponent::Input(float deltaTime){
}


void Collision2DComponent::Render(SDL_Renderer* renderer){

}

ComponentType Collision2DComponent::GetType(){
    return ComponentType::Collision2DComponent;
}

void Collision2DComponent::SetW(float w){
    mRectangle.w = w;
}
void Collision2DComponent::SetH(float h){
    mRectangle.h = h;
}
void Collision2DComponent::SetWH(float w, float h){
    mRectangle.w = w;
    mRectangle.h = h;
}

void Collision2DComponent::SetX(float x){mRectangle.x = x;}
void Collision2DComponent::SetY(float y){mRectangle.y = y;}
void Collision2DComponent::SetXY(float x, float y){mRectangle.x = x, mRectangle.y = y;}

float Collision2DComponent::GetX() const{return mRectangle.x;}

float Collision2DComponent::GetY() const{return mRectangle.y;}

float Collision2DComponent::GetW() const{return mRectangle.w;}
float Collision2DComponent::GetH() const{return mRectangle.h;}

SDL_FRect Collision2DComponent::GetRectangle() const{return mRectangle;}