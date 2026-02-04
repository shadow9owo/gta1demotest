#include <iostream>
#include <raylib.h>

#include "Data/Data.hpp"
#include "Renderer/Render.hpp"

int main()
{
    InitWindow(800,600," ");
    SetExitKey(0); 

    GTA1GLOBAL::gameinstance = GTA1GLOBAL::InitializeData();

    Camera2D maincam = { 0 }; // default

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK); //def

        GTA1GLOBAL::RENDER::SyncRenderLoop(); // render stuff

        EndDrawing();
    }

    return 0;
}