#pragma once

#include <SDL3/SDL.h>
#include <memory>
#include <string>
#include "Component.hpp"
#include "ComponentType.hpp"

/// @brief Component that handles collision between two Game Entities
struct Collision2DComponent : public Component{
    private:
		SDL_FRect mRectangle{20.0f,20.0f,32.0f,32.f};
        std::shared_ptr<SDL_Texture> mTexture;

    public:
        Collision2DComponent();

        ~Collision2DComponent();

        ComponentType GetType() override;

        void Update(float deltaTime) override;

        void Input(float deltaTime) override;


        void Render(SDL_Renderer* renderer) override;
        /// @brief Set width of game entity sprite to specified value
        /// @param w 
        void SetW(float w);

        /// @brief sets height of game entity sprite to specified value
        /// @param h 
        void SetH(float h);

        /// @brief sets both widht and height of game entity sprite to specified value
        /// @param w 
        /// @param h 
        void SetWH(float w, float h);

        /// @brief sets the x position of game entity sprite to specified value
        /// @param x 
        void SetX(float x);
        
        /// @brief sets the y position of game entity sprite to specified value
        /// @param y 
        void SetY(float y);
        
        /// @brief Sets both the x and y positions of game entity sprite to specified values
        /// @param x 
        /// @param y 
        void SetXY(float x, float y);

        /// @brief returns the x position of game entity sprite
        /// @return 
        float GetX() const;

        /// @brief returns the y position of game entity sprite
        /// @return 
        float GetY() const;

        /// @brief returns the width of game entity sprite
        /// @return 
        float GetW() const;

        /// @brief returns the height of game entity sprite
        /// @return 
        float GetH() const;

        /// @brief returns the SDL_Frect behind every game entity
        /// @return 
        SDL_FRect GetRectangle() const;

};