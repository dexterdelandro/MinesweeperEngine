#pragma once

#include <SDL3/SDL.h>
#include <memory>
#include <string>
#include "Component.hpp"
#include "ComponentType.hpp"

/// @brief Component for game entities with special input controls
struct InputComponent : public Component{
    private:
    float mSpeed{200.0f};

    public:
        InputComponent();

        ~InputComponent();

        ComponentType GetType() override;

        void Update(float deltaTime) override;

        void Input(float deltaTime) override;


        void Render(SDL_Renderer* renderer) override;

};