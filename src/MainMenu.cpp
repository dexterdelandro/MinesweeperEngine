#include "MainMenu.hpp"
#include "InputComponent.hpp"

MainMenu::MainMenu(){
    //tileWidth = 64;
    //tileHeight = 64;
}


MainMenu::~MainMenu(){
    ShutDown();
}

void MainMenu::StartUp(SDL_Renderer* renderer){

    nextScene = -1;
    mRenderer = renderer;
    std::shared_ptr<GameEntity> level1Btn= std::make_shared<GameEntity>();
    level1Btn->AddDefaultTransform();
    std::shared_ptr<TextureComponent> lvl1tex = std::make_shared<TextureComponent>();
    lvl1tex->CreateTexture(renderer, "./assets/Images/UI/level1.bmp");
    level1Btn->AddComponent(lvl1tex);
    level1Btn->GetTransform()->SetXY(130,325);
    level1Btn->GetTransform()->SetWH(150,75);
    _buttons.push_back(std::move(level1Btn));

    std::shared_ptr<GameEntity> createBtn= std::make_shared<GameEntity>();
    createBtn->AddDefaultTransform();
    std::shared_ptr<TextureComponent> createTex = std::make_shared<TextureComponent>();
    createTex->CreateTexture(renderer, "./assets/Images/UI/create.bmp");
    createBtn->AddComponent(createTex);
    createBtn->GetTransform()->SetXY(200,450);
    createBtn->GetTransform()->SetWH(150,75);
    _buttons.push_back(std::move(createBtn));

    std::shared_ptr<GameEntity> customBtn= std::make_shared<GameEntity>();
    customBtn->AddDefaultTransform();
    std::shared_ptr<TextureComponent> customTex = std::make_shared<TextureComponent>();
    customTex->CreateTexture(renderer, "./assets/Images/UI/custom.bmp");
    customBtn->AddComponent(customTex);
    customBtn->GetTransform()->SetXY(450,450);
    customBtn->GetTransform()->SetWH(150,75);
    _buttons.push_back(std::move(customBtn));

    std::shared_ptr<GameEntity> level2Btn= std::make_shared<GameEntity>();
    level2Btn->AddDefaultTransform();
    std::shared_ptr<TextureComponent> lvl2tex = std::make_shared<TextureComponent>();
    lvl2tex->CreateTexture(renderer, "./assets/Images/UI/level2.bmp");
    level2Btn->AddComponent(lvl2tex);
    level2Btn->GetTransform()->SetXY(330,325);
    level2Btn->GetTransform()->SetWH(150,75);
    _buttons.push_back(std::move(level2Btn));

    std::shared_ptr<GameEntity> level3Btn= std::make_shared<GameEntity>();
    level3Btn->AddDefaultTransform();
    std::shared_ptr<TextureComponent> lvl3tex = std::make_shared<TextureComponent>();
    lvl3tex->CreateTexture(renderer, "./assets/Images/UI/level3.bmp");
    level3Btn->AddComponent(lvl3tex);
    level3Btn->GetTransform()->SetXY(530,325);
    level3Btn->GetTransform()->SetWH(150,75);
    _buttons.push_back(std::move(level3Btn));

     std::shared_ptr<GameEntity> title= std::make_shared<GameEntity>();
    title->AddDefaultTransform();
    std::shared_ptr<TextureComponent> titletex = std::make_shared<TextureComponent>();
    titletex->CreateTexture(renderer, "./assets/Images/UI/title.bmp");
    title->AddComponent(titletex);
    title->GetTransform()->SetXY(50,50);
    title->GetTransform()->SetWH(700,250);
    _buttons.push_back(std::move(title));
    
}

void MainMenu::ShutDown(){

}

void MainMenu::Input(float deltaTime){
    //mainCharacter->Input(deltaTime);
    SDL_Event event;
    //processing input
    float x, y;
    Uint32 buttons = SDL_GetMouseState(&x,&y);
    if(!isButtonDown&&(buttons & SDL_BUTTON_LMASK)!=0){ //left click
        //SDL_Log("Left click @ %f : %f", x, y);
        for(int i=0; i<_buttons.size(); i++){
            //gets button transform and see if mouse click position is in same spot as button, if so load new scene
            auto buttonTransform = _buttons[i].get()->GetTransform();
            if(x>buttonTransform->GetX() && x< buttonTransform->GetX() + buttonTransform->GetW() &&
               y>buttonTransform->GetY() && y<buttonTransform->GetY()+buttonTransform->GetH()){
                //SDL_Log("clickedButton");
                nextScene = i;
                break;
            }
        }
        isButtonDown = true;
    }
    if(isButtonDown&&(buttons&SDL_BUTTON_LMASK)==0&&(buttons&SDL_BUTTON_RMASK)==0){ //relase click
        //SDL_Log("Released");
        isButtonDown = false;
    }
}
    

void MainMenu::Update(float deltaTime){
   
}

void MainMenu::Render(){
    SDL_SetRenderDrawColor(mRenderer, 32, 32, 64, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(mRenderer);

    SDL_SetRenderDrawColor(mRenderer, 255, 255, 255, SDL_ALPHA_OPAQUE);

    for(int i=0; i<_buttons.size(); i++){
        _buttons[i].get()->Render(mRenderer);
    }

    SDL_RenderPresent(mRenderer);
}

void MainMenu::SetSceneActive(bool status){
    isActive = status;
}

bool MainMenu::IsSceneActive(){return isActive;}

int MainMenu::GetNextScene(){return nextScene;}