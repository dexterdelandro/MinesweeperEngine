#include "EnemyGameEntity.hpp"

EnemyGameEntity::EnemyGameEntity(SDL_Renderer* renderer){
    minLaunchTime+= std::rand() % 10000;
}

EnemyGameEntity::~EnemyGameEntity(){

}

void EnemyGameEntity::Input(float deltaTime){
    for(auto& [key,value]: mComponents){
        mComponents[key]->Input(deltaTime);
    }

    for(auto& children: mGameEntities){
        children->Input(deltaTime);
    }
}

void EnemyGameEntity::Update(float deltaTime){

    // index 0 is hard coded to be projectile
    std::shared_ptr<Projectile> mProjectile = dynamic_pointer_cast<Projectile>(GetChildGameEntityAtIndex(0));

    if(!mRenderable){
       // GetProjectile()->SetRenderable(false);
        return;
    }

    if(offset>80){
        xPositiveDirection=false;
    }
    if(offset<-80){
        xPositiveDirection=true;
    }

    auto transform = GetComponent<TransformComponent>(ComponentType::TransformComponent);


    if(xPositiveDirection){
        transform->SetX(transform->GetX() + mSpeed*deltaTime);
        offset += mSpeed * deltaTime;
    }else{
        transform->SetX(transform->GetX() - mSpeed*deltaTime);
        offset -= mSpeed*deltaTime;
    }

    
    if(mRenderable){
        mProjectile->Launch(transform->GetX(), transform->GetY(), false, minLaunchTime);
    }


    for(auto& [key,value]: mComponents){
        mComponents[key]->Update(deltaTime);
    }

    for(auto& children: mGameEntities){
        children->Update(deltaTime);
    }
}

void EnemyGameEntity::Render(SDL_Renderer* renderer){
        // index 0 is hard coded to be projectile
    std::shared_ptr<Projectile> mProjectile = dynamic_pointer_cast<Projectile>(GetChildGameEntityAtIndex(0));

    if(mRenderable){
        mProjectile->Render(renderer);
    }else{
        mProjectile->SetRenderable(false);
        return;
    }

    for(auto& [key,value]: mComponents){
        mComponents[key]->Render(renderer);
    }
    for(auto& children: mGameEntities){
        children->Render(renderer);
    }
}
