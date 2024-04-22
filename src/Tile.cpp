#include "Tile.hpp"

Tile::Tile(int row, int col, SDL_Renderer* renderer){
    _row = row;
    _col = col;
    _renderer = renderer;
}

Tile::~Tile(){

}


bool Tile::Clicked(){
        if(_isShown) return false;
        _isShown = true;
        auto texture = GetComponent<TextureComponent>(ComponentType::TextureComponent);
        texture->CreateTexture(_renderer, "./assets/Images/Tiles/tile_"+std::to_string(_value)+".bmp");
        //SDL_Log("Changed Tile at %i : %i", _row, _col);
        return true;
}

void Tile::Flagged(){
    if(_isShown) return;
    auto texture = GetComponent<TextureComponent>(ComponentType::TextureComponent);
    if(_isFlagged){
        _isFlagged = false;
        texture->CreateTexture(_renderer, "./assets/Images/Tiles/tile.bmp");
    }else{
        _isFlagged = true;
        texture->CreateTexture(_renderer, "./assets/Images/Tiles/tile_flag.bmp");

    }
}

void Tile::SetValue(int value){_value = value;}
int Tile::GetValue(){return _value;}

int Tile::GetRow(){return _row;}
int Tile::GetCol(){return _col;}

void Tile::Update(float deltaTime){}

void Tile::Render(SDL_Renderer* renderer){
    //SDL_Log("%f",mComponents.size());
    for(auto& [key,value]: mComponents){
            mComponents[key]->Render(renderer);
            //SDL_Log("rendering tile %i : %i", _row, _col);
        }
    // for(auto& children: mGameEntities){
    //     children->Render(renderer);
    // }
}

void Tile::Input(float deltaTIme){}

bool Tile::GetFlagged(){return _isFlagged;}

void Tile::ToggleSetMine(){
    auto texture = GetComponent<TextureComponent>(ComponentType::TextureComponent);
    if(!_isMineToggle){
        _isMineToggle = true;
        texture->CreateTexture(_renderer, "./assets/Images/Tiles/tile_-1.bmp");
        _value = -1;
    }else{
        _isMineToggle = false;
        texture->CreateTexture(_renderer, "./assets/Images/Tiles/tile.bmp");
        _value = 0;
    }
}