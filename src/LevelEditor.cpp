#include "LevelEditor.hpp"
#include "InputComponent.hpp"

LevelEditor::LevelEditor(){
    tileWidth = 64;
    tileHeight = 64;
    numRows = 8;
    numCols = 8;
    numMines = 5;
}


LevelEditor::~LevelEditor(){
    ShutDown();
}

void LevelEditor::StartUp(SDL_Renderer* renderer){

    nextScene = -1;
    mRenderer = renderer;
    board = std::make_shared<Grid>(numRows, numCols, numMines,tileWidth,tileHeight);
    board->CreateGrid(mRenderer);
    
    saveBtn= std::make_shared<GameEntity>();
    saveBtn->AddDefaultTransform();
    std::shared_ptr<TextureComponent> savetex = std::make_shared<TextureComponent>();
    savetex->CreateTexture(renderer, "./assets/Images/UI/save.bmp");
    saveBtn->AddComponent(savetex);
    saveBtn->GetTransform()->SetXY(615,250);
    saveBtn->GetTransform()->SetWH(150,75);
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

void LevelEditor::ShutDown(){

}

void LevelEditor::Input(float deltaTime){
    //mainCharacter->Input(deltaTime);
    SDL_Event event;
    //processing input
    float x, y;
    Uint32 buttons = SDL_GetMouseState(&x,&y);
    if(!isButtonDown&&(buttons & SDL_BUTTON_LMASK)!=0){ //left click
        //SDL_Log("Left click @ %f : %f", x, y);
        if(board->GetTileFromXY(x,y)!=nullptr){
            auto tempTile = board->GetTileFromXY(x,y);
            tempTile.get()->ToggleSetMine();
        }else{
            auto buttonTransform = saveBtn.get()->GetTransform();
            if(x>buttonTransform->GetX() && x< buttonTransform->GetX() + buttonTransform->GetW() &&
               y>buttonTransform->GetY() && y<buttonTransform->GetY()+buttonTransform->GetH()){
                //SDL_Log("clickedButton");
                nextScene = 0;
            }
        }
        isButtonDown = true;
    }
    if(isButtonDown&&(buttons&SDL_BUTTON_LMASK)==0){ //relase click
        //SDL_Log("Released");
        isButtonDown = false;
    }

    // while(SDL_PollEvent(&event)){
    //     if(event.type == SDL_EVENT_MOUSE_MOTION){
    //         SDL_Log("yer");
    //     }
    // }
}
    

void LevelEditor::Update(float deltaTime){
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

void LevelEditor::Render(){
    SDL_SetRenderDrawColor(mRenderer, 32, 32, 64, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(mRenderer);

    // SDL_SetRenderDrawColor(mRenderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
    // for(int i=0; i < enemies.size(); i++){
    //     enemies[i]->Render(mRenderer);
    // }

    //mainCharacter->Render(mRenderer);
    board->RenderGrid(mRenderer);
    saveBtn.get()->Render(mRenderer);


    SDL_RenderPresent(mRenderer);
}

void LevelEditor::SetSceneActive(bool status){
    isActive = status;
}

bool LevelEditor::IsSceneActive(){return isActive;}

int LevelEditor::GetNextScene(){return nextScene;}

void LevelEditor::WriteFile(){
    SDL_Log("Writing file...");
    std::ofstream File("./assets/CustomMap/board.txt", std::ofstream::trunc);
    
    //write grid variables to file
    File<<std::to_string(numRows)+"\n";
    File<<std::to_string(numCols)+"\n";
    File<<std::to_string(numMines)+"\n";
    File<<std::to_string(tileWidth)+"\n";
    File<<std::to_string(tileHeight)+"\n";

    //write grid values to file
    for(int r=0; r<numRows; r++){
        for(int c=0; c<numCols; c++){
            File<<std::to_string(board.get()->GetTileFromRC(r,c).get()->GetValue())+"\n";
        }
    }

    File.close();
    SDL_Log("Done Writing File.");
}