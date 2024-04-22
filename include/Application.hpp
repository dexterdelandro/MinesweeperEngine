#pragma once
// Example program:
// Using SDL2 to create an application window

#include <SDL3/SDL.h>
#include <stdio.h>
#include <cstdlib>
#include <vector>
#include <memory>
#include "GameEntity.hpp"
#include "EnemyGameEntity.hpp"
#include "TextureComponent.hpp"
#include "Projectile.hpp"
#include "Level1.hpp"
#include "MainMenu.hpp"
#include "LevelEditor.hpp"
#include "LevelCustom.hpp"
#include "Level2.hpp"
#include "Level3.hpp"

/// @brief Creates SDL resrouces and is the main Game Loop. Handles Scene Changes
struct Application{
    private:
        SDL_Window* mWindow;
        bool mRun{true};
        float mPoints{0.0f};
        SDL_Renderer* mRenderer;
        std::vector<std::shared_ptr<EnemyGameEntity>> enemies; 
        std::shared_ptr<GameEntity> mainCharacter;

        Level1 level1Scene;
        Level2 level2Scene;
        Level3 level3Scene;
        MainMenu menu;
        LevelEditor editor;
        LevelCustom custom;

    public:
    Application(int argc, char* argv[]);
    ~Application();

    /// @brief Create SDL resources to be used
    void StartUp();

    /// @brief Gets called when application quits
    void ShutDown();

    /// @brief Polls SDL to see if applicaiton quit, then call active scene's Input function
    /// @param deltaTime 
    void Input(float deltaTime);

    /// @brief Handles all scene changing requests, then Calls active scene's Update Function
    /// @param deltaTime 
    void Update(float deltaTime);

    /// @brief Calls ative scene's Render function
    void Render();
    
    /// @brief the main game loop, will run at specified targetFPS
    /// @param targetFPS 
    void Loop(float targetFPS);
};