#include "RenderDbg.hpp"
#include <raylib.h>
#include "../../Data/Data.hpp"

namespace GTA1GLOBAL
{
    void RenderDebugTextNow()
    {
        //call this from render loop or il cut your dick off

        DrawText(TextFormat("%i",GTA1GLOBAL::gameinstance.build.buildNumber),0,0,12,WHITE);
        DrawText(TextFormat("%d",GTA1GLOBAL::gameinstance.build.debugmode),0,12,12,WHITE);
        DrawText(TextFormat("%f",GTA1GLOBAL::gameinstance.player.health),0,24,12,WHITE);
        DrawText(TextFormat("%f%f%f",GTA1GLOBAL::gameinstance.player.position.x,GTA1GLOBAL::gameinstance.player.position.y,GTA1GLOBAL::gameinstance.player.position.z),0,36,12,WHITE);
        DrawText(TextFormat("%f%f%f",GTA1GLOBAL::gameinstance.player.rotation.x,GTA1GLOBAL::gameinstance.player.rotation.y,GTA1GLOBAL::gameinstance.player.rotation.z),0,48,12,WHITE);
        DrawText(TextFormat("%f",GTA1GLOBAL::gameinstance.player.speed),0,60,12,WHITE);
        DrawText(TextFormat("%i",GTA1GLOBAL::gameinstance.player.totalammo),0,72,12,WHITE);
    }
}