#include "Application.hpp"
#include "InputComponent.hpp"

Application::Application(int argc, char* argv[]){
        StartUp();
    }


Application::~Application(){
    ShutDown();
}

void Application::StartUp(){
    if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO!=0)){

        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
    }
    mWindow = SDL_CreateWindow(
        "An SDL3 window",                  // window title
        800,                               // width, in pixels
        600,                               // height, in pixels
        SDL_WINDOW_OPENGL              // flags - see below
    );

    mRenderer = SDL_CreateRenderer(mWindow, NULL, SDL_RENDERER_ACCELERATED);
    if(mRenderer==NULL)SDL_Log("Could not create renderer");

    menu.StartUp(mRenderer);
    menu.SetSceneActive(true);
    //mScene.StartUp(mRenderer);
    //mScene.SetSceneActive(true);
    SDL_Surface* windowSurface = SDL_GetWindowSurface(mWindow);

}

void Application::ShutDown(){
    SDL_DestroyWindow(mWindow);
    SDL_Quit();
}

void Application::Input(float deltaTime){
    SDL_Event event;
    //processing input
    while(SDL_PollEvent(&event)){
        if(event.type == SDL_EVENT_QUIT){
            SDL_Log("Program quit %li",event.quit.timestamp);
            mRun = false;
            //mScene.SetSceneActive(false);
        }
    }

    if(menu.IsSceneActive()){
        menu.Input(deltaTime);
    }else if(level1Scene.IsSceneActive()){
        level1Scene.Input(deltaTime);
    }else if(editor.IsSceneActive()){
        editor.Input(deltaTime);
    }else if(custom.IsSceneActive()){
        custom.Input(deltaTime);
    }else if(level2Scene.IsSceneActive()){
        level2Scene.Input(deltaTime);
    }else if(level3Scene.IsSceneActive()){
        level3Scene.Input(deltaTime);
    }

}

void Application::Update(float deltaTime){
    if(menu.IsSceneActive()){
        int nextScene = menu.GetNextScene();
        switch(nextScene){
            case -1:
                menu.Update(deltaTime);
                break;
            case 0:
                menu.SetSceneActive(false);
                SDL_Delay(350);
                level1Scene.StartUp(mRenderer);
                level1Scene.SetSceneActive(true);
                break;
            case 1:
                menu.SetSceneActive(false);
                SDL_Delay(350);
                editor.StartUp(mRenderer);
                editor.SetSceneActive(true);
                break;
            case 2:
                menu.SetSceneActive(false);
                SDL_Delay(350);
                custom.StartUp(mRenderer);
                custom.SetSceneActive(true);
                break;
            case 3:
                menu.SetSceneActive(false);
                SDL_Delay(350);
                level2Scene.StartUp(mRenderer);
                level2Scene.SetSceneActive(true);
                break;
            case 4:
                menu.SetSceneActive(false);
                SDL_Delay(350);
                level3Scene.StartUp(mRenderer);
                level3Scene.SetSceneActive(true);
                break;
        }
    }else if(level1Scene.IsSceneActive()){
        int nextScene = level1Scene.GetNextScene();
        switch(nextScene){
            case -1:
                level1Scene.Update(deltaTime);
                break;
            case 0:
                level1Scene.SetSceneActive(false);
                SDL_Delay(350);
                menu.StartUp(mRenderer);
                menu.SetSceneActive(true);
        }
        level1Scene.Update(deltaTime);
    }else if(level2Scene.IsSceneActive()){
        int nextScene = level2Scene.GetNextScene();
        switch(nextScene){
            case -1:
                level2Scene.Update(deltaTime);
                break;
            case 0:
                level2Scene.SetSceneActive(false);
                SDL_Delay(350);
                menu.StartUp(mRenderer);
                menu.SetSceneActive(true);
        }
        level2Scene.Update(deltaTime);
    }else if(level3Scene.IsSceneActive()){
        int nextScene = level3Scene.GetNextScene();
        switch(nextScene){
            case -1:
                level3Scene.Update(deltaTime);
                break;
            case 0:
                level3Scene.SetSceneActive(false);
                SDL_Delay(350);
                menu.StartUp(mRenderer);
                menu.SetSceneActive(true);
        }
        level3Scene.Update(deltaTime);
    }else if(editor.IsSceneActive()){
        int nextScene = editor.GetNextScene();
        switch(nextScene){
            case -1:
                editor.Update(deltaTime);
                break;
            case 0:
                editor.SetSceneActive(false);
                editor.WriteFile();
                SDL_Delay(350);
                menu.StartUp(mRenderer);
                menu.SetSceneActive(true);
        }
        editor.Update(deltaTime);
    }else if(custom.IsSceneActive()){
        custom.Update(deltaTime);
    }
}


void Application::Render(){
    if(menu.IsSceneActive()){
        menu.Render();
    }else if(level1Scene.IsSceneActive()){
        level1Scene.Render();
    }else if(editor.IsSceneActive()){
        editor.Render();
    }else if(custom.IsSceneActive()){
        custom.Render();
    }else if(level2Scene.IsSceneActive()){
        level2Scene.Render();
    }else if(level3Scene.IsSceneActive()){
        level3Scene.Render();
    }
}

void Application::Loop(float targetFPS){
    Uint64 lastTime, currentTime;
    lastTime = SDL_GetTicks();
    Uint64 framesElapsed = 0;
    float deltaTime= 1.0f/targetFPS;
    while(mRun){
        Uint64 startofFrame =  SDL_GetTicks();
        Input(deltaTime);
        Update(deltaTime);
        Render();
        Uint64 elapsedTime = SDL_GetTicks() - startofFrame;
        framesElapsed++;

        //time keeping code
        currentTime = SDL_GetTicks();

        //frame cap
        if(elapsedTime<(1000/targetFPS)){
            Uint64 delay = (1000/targetFPS)-elapsedTime;
            SDL_Delay(delay);
            //SDL_Log("delaying for: %i s",delay);
        }

        //log frames/sec
        if(currentTime > lastTime+1000){
           // SDL_Log("1 second has elapsed");
            //SDL_Log("%li fps",framesElapsed);
            framesElapsed = 0;
            lastTime = SDL_GetTicks();
        }
    }
}