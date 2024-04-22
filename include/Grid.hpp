#pragma once
#include <SDL3/SDL.h>
#include <memory>
#include <vector>
#include <math.h>
#include <random>
#include <iostream>
#include <fstream>
#include "GameEntity.hpp"
#include "Projectile.hpp"
#include "TextureComponent.hpp"
#include "ComponentType.hpp"
#include "Tile.hpp"

struct Grid{
private:
    /// @brief x-axis offset from left edge of screen
    int _offsetX{50};
    
    /// @brief y-axis offset from right edge of screen
    int _offsetY{30};

    /// @brief the number of rows in the grid
    int _numRows{0};

    /// @brief the number of columns in the grid
    int _numCols{0};

    /// @brief number of mines in the grid
    int _numMines{0};

    /// @brief number of flags in the grid
    int _numFlags{0};

    /// @brief total number of tiles in the grid
    int _totalTiles;

    /// @brief total number of tiles that have been revealed
    int _numTilesFlipped{0};

    /// @brief current number of flags in the grid
    int _flagCount;

    /// @brief width of tile
    float _tileSizeX;

    /// @brief height of tile
    float _tileSizeY;

    /// @brief 2D vector of Tile pointers, the data source of the grid
    std::vector<std::vector<std::shared_ptr<Tile>>> _grid;

    /// @brief whether the game is over or not
    bool _gameOver{false};

public:

    /// @brief sets global variables for grid creation
    /// @param numRows 
    /// @param numCols 
    /// @param numMines 
    /// @param tileSizeX 
    /// @param tileSizeY 
    Grid(int numRows, int numCols, int numMines, int tileSizeX, int tileSizeY);

    /// @brief creates a new grid from data file
    /// @param renderer 
    /// @param filepath 
    Grid(SDL_Renderer* renderer, std::string filepath);

    //Grid();
    ~Grid();
    void Reset();
    /// @brief Create a new Grid with global variables
    /// @param renderer 
    void CreateGrid(SDL_Renderer* renderer);

    /// @brief Loop through all tiles, set their .Value equal to the number of neighboring mines
    void AssignValues();

    /// @brief Returns the number of neighboring mines at specified tile
    /// @param tile 
    /// @return 
    int GetNeighborMinesAtTile(std::shared_ptr<Tile> tile);

    /// @brief Action when a tile is clicked. Recursively click neighboring tiles if this tile value is 0.
    /// @param tile 
    void ClickedTile(std::shared_ptr<Tile> tile);

    /// @brief mark the specified tile as a flag
    /// @param tile 
    void FlaggedTile(std::shared_ptr<Tile>tile);

    /// @brief show the grid
    void RevealGrid();

    /// @brief returns the Tile at specified mouse click position
    /// @param x position of mouse
    /// @param y position of mouse
    /// @return 
    std::shared_ptr<Tile> GetTileFromXY(float x, float y);

    /// @brief returns the Tile at specified Grid position
    /// @param r row the tile to get
    /// @param c column of the tile to get
    /// @return 
    std::shared_ptr<Tile> GetTileFromRC(int r, int c);

    /// @brief end the game, print you lose message, make the board un-interactable
    void EndGame();

    /// @brief renders the grid by looping though Tiles and calling their render funciton
    /// @param renderer 
    void RenderGrid(SDL_Renderer* renderer);

    /// @brief returns true if the user won the game (no more tiles to click)
    /// @return 
    bool DidWin();

    
    /// @brief randomize the position of mines
    void RandomizeMines();
};