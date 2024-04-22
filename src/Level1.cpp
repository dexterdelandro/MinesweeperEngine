#include "Level1.hpp"
#include "InputComponent.hpp"

Level1::Level1(){
    tileWidth = 64;
    tileHeight = 64;
    numRows = 8;
    numCols = 8;
    numMines = 5;
}


Level1::~Level1(){
    ShutDown();
}

void Level1::StartUp(SDL_Renderer* renderer){

    nextScene = -1;
    mRenderer = renderer;
    board = std::make_shared<Grid>(numRows, numCols, numMines,tileWidth,tileHeight);
    board->CreateGrid(mRenderer);
    board->RandomizeMines();
    board->AssignValues();

    menuBtn= std::make_shared<GameEntity>();
    menuBtn->AddDefaultTransform();
    std::shared_ptr<TextureComponent> menutex = std::make_shared<TextureComponent>();
    menutex->CreateTexture(renderer, "./assets/Images/UI/menu.bmp");
    menuBtn->AddComponent(menutex);
    menuBtn->GetTransform()->SetXY(615,250);
    menuBtn->GetTransform()->SetWH(150,75);
    
    //create grid of enemies, nested-for?
    // int row= 1;
    // int col = 1;
    // for(int i=0; i<36; i++){         
    //     std::shared_ptr<EnemyGameEntity> tempEntity = std::make_shared<EnemyGameEntity>(mRenderer);
    //     tempEntity->AddDefaultTransform();

    //     std::shared_ptr<TextureComponent> tex = std::make_shared<TextureComponent>();
    //     tex->CreateTexture(mRenderer,"./assets/Images/Tiles/tile.bmp");
    //     tempEntity->AddComponent(tex);

    //     std::shared_ptr<Collision2DComponent> collider = std::make_shared<Collision2DComponent>();
    //     tempEntity->AddComponent(collider);

    //     if(i%12==0){
    //         row++;
    //         col = 0;
    //     }
    //     col++;
    //     tempEntity->GetTransform()->SetXY(col*40+80, row*40);

    //     //add projectile as child game object to all enemies
    //     //create texture
    //     std::shared_ptr<TextureComponent> projectile_texture = std::make_shared<TextureComponent>();
    //     projectile_texture->CreateTexture(renderer, "./assets/bullet.bmp");
    //     //create collider for projectile
    //     std::shared_ptr<Collision2DComponent> projectile_collider = std::make_shared<Collision2DComponent>();


    //     std::shared_ptr<Projectile> mProjectile = std::make_shared<Projectile>();
    //     mProjectile->AddDefaultTransform();
    //     mProjectile->GetTransform()->SetW(24.0f);

    //     mProjectile->AddComponent(projectile_texture);
    //     mProjectile->AddComponent(projectile_collider);
    //     tempEntity->AddChildGameEntity(mProjectile);

    //     enemies.push_back(std::move(tempEntity));

    // }
    //create character
    // std::shared_ptr<TextureComponent> characterTexture = std::make_shared<TextureComponent>();
    // characterTexture->CreateTexture(mRenderer,"./assets/player.bmp");
    
    // mainCharacter = std::make_shared<GameEntity>();
    // mainCharacter->AddDefaultTransform();

    // mainCharacter->AddComponent(characterTexture);
    // mainCharacter->GetTransform()->SetXY(640/2-(32/2),440); //move x to center of screen - width

    
    // std::shared_ptr<InputComponent> inputController = std::make_shared<InputComponent>();
    // mainCharacter->AddComponent(inputController);

    // std::shared_ptr<Collision2DComponent> collider = std::make_shared<Collision2DComponent>();
    // mainCharacter->AddComponent(collider);

    // //add one child component to player
    // //this will be the projectile
    // std::shared_ptr<TextureComponent> playerProjectileTexture = std::make_shared<TextureComponent>();
    // playerProjectileTexture->CreateTexture(renderer, "./assets/bullet.bmp");

    // std::shared_ptr<Collision2DComponent> playerProjectileCollider = std::make_shared<Collision2DComponent>();


    // std::shared_ptr<Projectile>mainCharacterProjectile = std::make_shared<Projectile>();
    // mainCharacterProjectile->AddDefaultTransform();
    // mainCharacterProjectile->GetTransform()->SetW(24.0f);

    // mainCharacterProjectile->AddComponent(playerProjectileTexture);
    // mainCharacterProjectile->AddComponent(playerProjectileCollider);

    // mainCharacter->AddChildGameEntity(mainCharacterProjectile);

    //mainCharacter = Sprite(mRenderer, "./assets/hero.bmp");
    //empty pixels for now

/*
        //load in art asset
        SDL_Surface* myImage = SDL_LoadBMP("./poster.bmp");
        if(myImage==NULL)SDL_Log("Could not find image");

        //copy art asset to the window
        SDL_BlitSurface(myImage, NULL, windowSurface, NULL);
        SDL_UpdateWindowSurface(mWindow);

        //destroy "myImage", we copied it to our window no more use
        SDL_DestroySurface(myImage);
*/

}

void Level1::ShutDown(){

}

void Level1::Input(float deltaTime){
    //mainCharacter->Input(deltaTime);
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

    // while(SDL_PollEvent(&event)){
    //     if(event.type == SDL_EVENT_MOUSE_MOTION){
    //         SDL_Log("yer");
    //     }
    // }
}
    

void Level1::Update(float deltaTime){
    //mainCharacter->Update(deltaTime);

    // for(int i=0; i < enemies.size(); i++){
    //     enemies[i]->Update(deltaTime);
        
    //     std::shared_ptr<GameEntity> enemyProjectile = dynamic_pointer_cast<Projectile>
    //                                         (enemies[i]->GetChildGameEntityAtIndex(0));


    //     bool enemyIsHit = enemies[i]->Intersects(mainCharacter->GetChildGameEntityAtIndex(0));
        
    //     if(true==enemyIsHit&& enemies[i]->IsRenderable()){
    //         enemies[i]->SetRenderable(false);
    //         mPoints+=10.0f;
    //     }
        
    //     bool isGameOver = false;

    //     if(enemies[i]->IsRenderable()){
    //         isGameOver = mainCharacter->Intersects(enemyProjectile);
    //     }
    //     if(true == isGameOver){
    //         SDL_Log("YOU LOOOOOSE D:");
    //         SDL_Log("Your score is: %f", mPoints);
    //         isActive = false;
    //     }

    //     if(mPoints>=enemies.size()*10.0f){
    //         SDL_Log("Nice! You Win!");
    //         isActive = false;
    //     }
    // }
}

void Level1::Render(){
    SDL_SetRenderDrawColor(mRenderer, 32, 32, 64, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(mRenderer);

    // SDL_SetRenderDrawColor(mRenderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
    // for(int i=0; i < enemies.size(); i++){
    //     enemies[i]->Render(mRenderer);
    // }

    //mainCharacter->Render(mRenderer);
    board->RenderGrid(mRenderer);
    menuBtn.get()->Render(mRenderer);

    SDL_RenderPresent(mRenderer);
}

void Level1::SetSceneActive(bool status){
    isActive = status;
}

bool Level1::IsSceneActive(){return isActive;}

int Level1::GetNextScene(){return nextScene;}