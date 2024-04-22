#include "InputComponent.hpp"
#include "GameEntity.hpp"
#include "Projectile.hpp"


InputComponent::InputComponent(){
}

InputComponent::~InputComponent(){

}

ComponentType InputComponent::GetType(){
    return ComponentType::InputComponent;
}

void InputComponent::Update(float deltaTime){

}

void InputComponent::Input(float deltaTime){

    const Uint8* state = SDL_GetKeyboardState(nullptr);
    auto ge = GetGameEntity();
    auto transform = ge->GetComponent<TransformComponent>(ComponentType::TransformComponent);

    if(state[SDL_SCANCODE_LEFT]){
        transform->SetX(transform->GetX()- mSpeed * deltaTime);

    }else if(state[SDL_SCANCODE_RIGHT]){
        transform->SetX(transform->GetX()+ mSpeed * deltaTime);
    }

    if(state[SDL_SCANCODE_UP]){
        std::shared_ptr<Projectile> projectile = dynamic_pointer_cast<Projectile>(ge->GetChildGameEntityAtIndex(0));

        projectile->Launch(transform->GetX(), transform->GetY(), true);
        // auto ge= GetGameEntity();
        // auto transform = ge->GetComponent<TransformComponent>(ComponentType::TransformComponent);
        
        // mProjectile->Launch(transform->GetX(), transform->GetY(), true);
    }

}


void InputComponent::Render(SDL_Renderer* renderer){

}