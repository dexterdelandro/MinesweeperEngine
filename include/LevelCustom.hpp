#pragma once
// Example program:
// Using SDL2 to create an Scene window

#include <SDL3/SDL.h>
#include <stdio.h>
#include <cstdlib>
#include <vector>
#include <memory>
#include "GameEntity.hpp"
#include "EnemyGameEntity.hpp"
#include "TextureComponent.hpp"
#include "Projectile.hpp"
#include "Grid.hpp"

/// @brief This scene holds the level that user created. Being stored in file at ./assets/CustomMap/board.txt
struct LevelCustom{
    private:
        //float mPoints{0.0f};
        //std::vector<std::shared_ptr<EnemyGameEntity>> enemies; 
        //std::shared_ptr<GameEntity> mainCharacter;
        bool isButtonDown{false};

        SDL_Renderer* mRenderer;
        std::shared_ptr<GameEntity> menuBtn;
        bool isActive{false};
        std::shared_ptr<Grid> board;
        int tileWidth;
        int tileHeight;
        int numMines;
        int numRows;
        int numCols;
        std::string _filepath;
        int nextScene{-1};


    public:
    LevelCustom();
    ~LevelCustom();

    /// @brief initalize values of the scene and loads in tilemap data file
    /// @param renderer 
    void StartUp(SDL_Renderer* renderer);

    void ShutDown();

    /// @brief calls input function of all entities in the scene
    /// @param deltaTime 
    void Input(float deltaTime);

    /// @brief calls update function of all entites in the scene
    /// @param deltaTime 
    void Update(float deltaTime);

    /// @brief calls render function of all entities in the scene
    void Render();

    /// @brief returns true if this scene is active, false if not
    /// @return 
    void SetSceneActive(bool status);

    /// @brief returns true if user wants to go back to menu, false if not
    /// @return 
    bool IsSceneActive();
    
};