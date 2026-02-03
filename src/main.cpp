#include <iostream>
#include <raylib.h>

#include "Data/Data.hpp"
#include "Renderer/Render.hpp"

int main()
{
    InitWindow(800,600," ");
    SetExitKey(0); 

    GTA1GLOBAL::Data game_data = GTA1GLOBAL::InitializeData(); //redundant but oh well

    Camera2D maincam = { 0 };

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK); //def

        GTA1GLOBAL::RENDER::AsyncRenderLoop();

        EndDrawing();
    }

    return 0;
}