#include "Grid.hpp"

Grid::Grid(int numRows, int numCols, int numMines, int tileSizeX, int tileSizeY)
{
    _numRows = numRows;
    _numCols = numCols;
    _numMines = numMines;
    _totalTiles = _numRows*_numCols;
    _tileSizeX = tileSizeX;
    _tileSizeY = tileSizeY;
}

Grid::~Grid()
{
}

void Grid::CreateGrid(SDL_Renderer* renderer)
{
    for(int r=0; r<_numRows; r++){
        std::vector<std::shared_ptr<Tile>> rowVec;
        for (int c=0; c<_numCols; c++){
            //Create Tile
            std::shared_ptr<Tile> tempTile = std::make_shared<Tile>(r,c,renderer);
            tempTile->AddDefaultTransform();
            std::shared_ptr<TextureComponent> tex = std::make_shared<TextureComponent>();
            tex->CreateTexture(renderer, "./assets/Images/Tiles/tile.bmp");
            tempTile->AddComponent(tex);
            //SDL_Log("%i", tempTile->GetValue());

            tempTile->GetTransform()->SetXY(_offsetX+c*_tileSizeX, _offsetY+r*_tileSizeY);
            tempTile->GetTransform()->SetWH(_tileSizeX, _tileSizeY);
            //SDL_Log("created tile %f : %f", tempTile->GetTransform()->GetX(),tempTile->GetTransform()->GetY() );
            rowVec.push_back(std::move(tempTile));
        
            //Tile->GetTransform()->SetXY();

            //add tile to grid
        }
        _grid.push_back(std::move(rowVec));
    }
}

void Grid::AssignValues()
{
    for(int r=0; r<_numRows; r++){
        for(int c=0; c<_numCols; c++){
            if(_grid[r][c]->GetValue()!=-1) _grid[r][c]->SetValue(GetNeighborMinesAtTile(_grid[r][c]));
        }
    }
}

void Grid::FlaggedTile(std::shared_ptr<Tile>tile)
{
    if(!_gameOver)tile.get()->Flagged();
}

void Grid::RevealGrid()
{
}

int Grid::GetNeighborMinesAtTile(std::shared_ptr<Tile> tile){
    int row = tile.get()->GetRow();
    int col = tile.get()->GetCol();
    int mineCounter = 0;
    
    if(row-1>=0 && col-1>=0 && _grid[row-1][col-1]->GetValue()==-1)mineCounter++;
    if(row-1>=0 && _grid[row-1][col]->GetValue()==-1)mineCounter++;
    if(row-1>=0 && col+1<_numCols && _grid[row-1][col+1]->GetValue()==-1)mineCounter++;
    
    if(col-1>=0 && _grid[row][col-1]->GetValue()==-1)mineCounter++;
    if(col+1<_numCols && _grid[row][col+1]->GetValue()==-1)mineCounter++;

    if(row+1<_numRows && col-1>=0 && _grid[row+1][col-1]->GetValue()==-1)mineCounter++;
    if(row+1<_numRows && _grid[row+1][col]->GetValue()==-1)mineCounter++;
    if(row+1<_numRows && col+1<_numCols && _grid[row+1][col+1]->GetValue()==-1)mineCounter++;

    return mineCounter;
}

void Grid::ClickedTile(std::shared_ptr<Tile> tile){
    if(nullptr==tile){
        SDL_Log("no tile here D:");
        return;
    }
    if(_gameOver||tile.get()->GetFlagged())return;

    int row = tile.get()->GetRow();
    int col = tile.get()->GetCol();
    if(tile.get()->Clicked()){ //means its a new click, tile hasn't been turned yet
        if(tile.get()->GetValue()==-1){ //if tile is a mine
            EndGame();
        }else{
            _numTilesFlipped++;
            //recursive neighboring tiles if value is 0 (no neighboring mines)
            if(tile.get()->GetValue()==0){
                if(row-1>=0 && col-1>=0)ClickedTile(_grid[row-1][col-1]);
                if(row-1>=0)ClickedTile(_grid[row-1][col]);
                if(row-1>=0 && col+1<_numCols)ClickedTile(_grid[row-1][col+1]);

                if(col-1>=0)ClickedTile(_grid[row][col-1]);
                if(col+1<_numCols)ClickedTile(_grid[row][col+1]);
                
                if(row+1<_numRows&&col-1>=0)ClickedTile(_grid[row+1][col-1]);
                if(row+1<_numRows)ClickedTile(_grid[row+1][col]);
                if(row+1<_numRows && col+1<_numCols)ClickedTile(_grid[row+1][col+1]);
            
            }else{

            }
            if(DidWin())_gameOver=true;
        }
    }
}

void Grid::Reset(){
    _numTilesFlipped = 0;
}

std::shared_ptr<Tile> Grid::GetTileFromXY(float x, float y){
    //SDL_Log("trying %f : %f", x, y);
    if(x<_offsetX || x>_offsetX + _numCols*_tileSizeX) return nullptr;
    if(y<_offsetY || y>_offsetY+_numRows*_tileSizeY)return nullptr;
    int tileR = floor((x-_offsetX)/_tileSizeX);
    int tileC = floor((y-_offsetY)/_tileSizeY);
    //SDL_Log("Tile %i : %i", tileC, tileR);
    return _grid[tileC][tileR];
}

void Grid::EndGame(){
    SDL_Log("You Lost!");
    _gameOver = true;
}

void Grid::RenderGrid(SDL_Renderer* renderer){
    for(int r=0; r<_numRows; r++){
        for(int c=0; c<_numRows; c++){
            //SDL_Log("trying to render grid");
            _grid[r][c].get()->Render(renderer);
            
        }
    }
}

std::shared_ptr<Tile> Grid::GetTileFromRC(int r, int c){
    return _grid[r][c];
}


bool Grid::DidWin(){
    //SDL_Log("%i / %i",_numTilesFlipped, _totalTiles-_numMines);
    if(_numTilesFlipped>=_totalTiles-_numMines){
        SDL_Log("You Win!");
        return true;
    }
    return false;
}

void Grid::RandomizeMines(){
    SDL_Log("setting mines");
    int mines = 0;
    while(mines<_numMines){
        int r = rand()%_numRows;
        int c = rand()%_numCols;
        if(_grid[r][c].get()->GetValue()!=-1){
            _grid[r][c].get()->SetValue(-1);
            //SDL_Log("mine @ %i : %i", r, c);
            mines++;
        }
    }
}

Grid::Grid(SDL_Renderer* renderer, std::string filepath){
    std::string line;
    std::ifstream File(filepath);
    int fileRows, fileCols, fileMines, fileTileWidth, fileTileHeight;
    //read first 5 values to get and assign grid parameters
    std::getline(File, line);
    _numRows = std::stoi(line);

    std::getline(File, line);
    _numCols = std::stoi(line);

    std::getline(File, line);
    _numMines = std::stoi(line);

    std::getline(File, line);
    _tileSizeX = std::stoi(line);

    std::getline(File, line);
    _tileSizeY = std::stoi(line);

    _totalTiles = _numRows*_numCols;

//create the grid so we can change values
    CreateGrid(renderer);
    SDL_Log("Reading File....");
    //read the rest of the file to get the grid data
    for(int r=0; r<_numRows; r++){
        for(int c = 0; c<_numCols; c++){
            std::getline(File, line);
            GetTileFromRC(r,c).get()->SetValue(std::stoi(line));
        }
    }

    File.close();
    SDL_Log("Done reading file");
}

