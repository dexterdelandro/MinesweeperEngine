#include "LevelCustom.hpp"
#include "InputComponent.hpp"

LevelCustom::LevelCustom(){
    _filepath = "./assets/CustomMap/board.txt";
    
}


LevelCustom::~LevelCustom(){
    ShutDown();
}

void LevelCustom::StartUp(SDL_Renderer* renderer){

    mRenderer = renderer;
    board = std::make_shared<Grid>(mRenderer, _filepath);
    board->AssignValues();

    menuBtn= std::make_shared<GameEntity>();
    menuBtn->AddDefaultTransform();
    std::shared_ptr<TextureComponent> menutex = std::make_shared<TextureComponent>();
    menutex->CreateTexture(renderer, "./assets/Images/UI/menu.bmp");
    menuBtn->AddComponent(menutex);
    menuBtn->GetTransform()->SetXY(615,250);
    menuBtn->GetTransform()->SetWH(150,75);
    
}

void LevelCustom::ShutDown(){

}

void LevelCustom::Input(float deltaTime){
    SDL_Event event;
    //processing input
    float x, y;
    Uint32 buttons = SDL_GetMouseState(&x,&y);
    if(!isButtonDown&&(buttons & SDL_BUTTON_LMASK)!=0){ //left click
        //SDL_Log("Left click @ %f : %f", x, y);
        if(board->GetTileFromXY(x,y)!=nullptr){
            board->ClickedTile(board->GetTileFromXY(x,y));
        }else{
            auto buttonTransform = menuBtn.get()->GetTransform();
            if(x>buttonTransform->GetX() && x< buttonTransform->GetX() + buttonTransform->GetW() &&
               y>buttonTransform->GetY() && y<buttonTransform->GetY()+buttonTransform->GetH()){
                //SDL_Log("clickedButton");
                nextScene = 0;
            }
        }
        isButtonDown = true;
    }else if(!isButtonDown&&(buttons & SDL_BUTTON_RMASK)!=0){ //right click
        //SDL_Log("Right click @ %f : %f", x, y);
        if(board->GetTileFromXY(x,y)!=nullptr)board->FlaggedTile(board->GetTileFromXY(x,y));
        isButtonDown = true;
    }
    if(isButtonDown&&(buttons&SDL_BUTTON_LMASK)==0&&(buttons&SDL_BUTTON_RMASK)==0){ //relase click
        //SDL_Log("Released");
        isButtonDown = false;
    }

}
    

void LevelCustom::Update(float deltaTime){
    
}

void LevelCustom::Render(){
    SDL_SetRenderDrawColor(mRenderer, 32, 32, 64, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(mRenderer);

    board->RenderGrid(mRenderer);
    menuBtn.get()->Render(mRenderer);


    SDL_RenderPresent(mRenderer);
}

void LevelCustom::SetSceneActive(bool status){
    isActive = status;
}

bool LevelCustom::IsSceneActive(){return isActive;}