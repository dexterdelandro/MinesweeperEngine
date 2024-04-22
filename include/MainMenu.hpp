#pragma once
// Example program:
// Using SDL2 to create an Scene window

#include <SDL3/SDL.h>
#include <stdio.h>
#include <cstdlib>
#include <vector>
#include <memory>
//#include "GameEntity.hpp"
#include "EnemyGameEntity.hpp"
#include "TextureComponent.hpp"
#include "Projectile.hpp"
#include "Grid.hpp"

/// @brief The main menu scene, display play buttons and detect/handle when one is clicked
struct MainMenu{
    private:
        //float mPoints{0.0f};
        std::vector<std::shared_ptr<GameEntity>> _buttons; 
        int nextScene{-1};
        //std::shared_ptr<GameEntity> mainCharacter;
        bool isButtonDown{false};

        SDL_Renderer* mRenderer;
        bool isActive{false};
        // std::shared_ptr<Grid> board;
        // int tileWidth;
        // int tileHeight;



    public:
    MainMenu();
    ~MainMenu();

    /// @brief initalize values of the scene
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

    /// @brief sets current scene to active so all functions can be called
    /// @param status 
    void SetSceneActive(bool status);

    /// @brief returns true if this scene is active, false if not
    /// @return 
    bool IsSceneActive();

    /// @brief returns true if user wants to go back to menu, false if not
    /// @return 
    int GetNextScene();
    
};