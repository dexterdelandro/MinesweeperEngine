#pragma once
#include <SDL3/SDL.h>
#include <memory>
#include "GameEntity.hpp"
#include "Projectile.hpp"
#include "TextureComponent.hpp"
#include "ComponentType.hpp"


/// @brief Struct to hold information for each tile in minesweeper tilemap
struct Tile:public GameEntity{
private:
    /// @brief whether or not the tile is shown
    bool _isShown{false};

    /// @brief whether or not the tile is flagged
    bool _isFlagged{false};

    /// @brief For Level Editor, toggles location of mine
    bool _isMineToggle{false};

    /// @brief the row the tile is in
    int _row; 

    /// @brief the column the tile is in
    int _col; 

    /// @brief the value of the tile, -1 if mine, otherwise it's number of neighboring tiles
    int _value{0};

    /// @brief SDL renderer, used to render tile
    SDL_Renderer* _renderer;


public:

    /// @brief Create a new tile at grid position [row][col]
    /// @param row 
    /// @param col 
    /// @param renderer 
    Tile(int row, int col, SDL_Renderer* renderer);

    ~Tile();

    /// @brief When a tile is left-clicked, reveal it if hidden. If revealed, update texture component to match value
    /// @return whether or not the tile has previously been revealed
    bool Clicked();

    /// @brief When a tile is right-clicked, flag it.
    void Flagged();

    /// @brief Sets value of tile (# of neighboring mines) to specified value
    /// @param value 
    void SetValue(int value);

    /// @brief Returns the value of the tile, -1 if mine, otherwise its # of neighboring tiles
    /// @return 
    int GetValue();

    /// @brief returns the row the tile is in
    /// @return 
    int GetRow();

    /// @brief returns the column the tile is in
    /// @return 
    int GetCol();

    /// @brief return whether or not the tile is flagged
    /// @return 
    bool GetFlagged();

    /// @brief For Level editor, toggle location of mine
    void ToggleSetMine();

    /// @brief Gets called every loop iteration, handles user input
    /// @param deltaTime 
    virtual void Input(float deltaTime) override;

    /// @brief Gets called every loop iteration, updates the tile
    /// @param deltaTime 
    virtual void Update(float deltaTime) override;

    /// @brief Gets called every loop iteration, draws the tile
    /// @param renderer 
    virtual void Render(SDL_Renderer* renderer);

};