#pragma once
#include <SDL3/SDL.h>
#include <memory>
#include <map>
#include <vector>
#include "Component.hpp"
#include "TextureComponent.hpp"
#include "InputComponent.hpp"
#include "TransformComponent.hpp"
#include "Collision2DComponent.hpp"

/// @brief All game objects derive from this class
struct GameEntity : public std::enable_shared_from_this<GameEntity>{
    protected:
        //std::vector<std::shared_ptr<Component>> mComponents;
        // for now, assume one component per gameEntity
        std::map<ComponentType, std::shared_ptr<Component>> mComponents;
        bool mRenderable{true};
        std::vector<std::shared_ptr<GameEntity>> mGameEntities;

    public:
        GameEntity();

        virtual ~GameEntity();

        /// @brief gets the pointer to this entity
        /// @return 
        std::shared_ptr<GameEntity> GetThisPtr(){
            return shared_from_this();
        }
        virtual void Input(float deltaTime);

        virtual void Update(float deltaTime);

        virtual void Render(SDL_Renderer* renderer);

        /// @brief Adds component of Type T to game entity
        /// @tparam T 
        /// @param c 
        template <typename T>
        void AddComponent(std::shared_ptr<T> c);

        /// @brief Gets component of Type T from game entity
        /// @tparam T 
        /// @param type 
        /// @return 
        template <typename T>
        std::shared_ptr<T> GetComponent(ComponentType type);

        /// @brief Creates and adds a default transfrom component to game entity
        void AddDefaultTransform();

        /// @brief Gets the tranfrom component from this entity
        /// @return 
        std::shared_ptr<TransformComponent> GetTransform();
        
        /// @brief Add a child to this game entity
        /// @param child 
        void AddChildGameEntity(std::shared_ptr<GameEntity> child);

        /// @brief retuns the child of this game entity at specified index positoin
        /// @param index 
        /// @return 
        std::shared_ptr<GameEntity> GetChildGameEntityAtIndex(size_t index);

// template <typename T>
// void AddComponent(std::shared_ptr<T> c){
//     mComponents[c->GetType()] = c;
// }

// template <typename T>
// std::shared_ptr<T> GetComponent(ComponentType type){
//     auto found = mComponents.find(type);
//     if(found!=mComponents.end()){
//         return dynamic_pointer_cast<T>(found->second);
//     }
//     return nullptr; //to get rid of warning, could use exception or log
// }
        
        /// @brief sets whether or not this game entity should be rendered to specified value
        /// @param value 
        void SetRenderable(bool value);

        /// @brief reurns whether or not this game entity is being drawn
        /// @return 
        bool IsRenderable() const;

        /// @brief returns true if this game entity intersects with specified game entity, false if not
        /// @param e 
        /// @return 
        bool Intersects(std::shared_ptr<GameEntity> e);

};


