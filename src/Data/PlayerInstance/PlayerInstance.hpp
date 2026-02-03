#pragma once

#include <raylib.h>
#include "../Scenes.hpp"

class PlayerInstance
{
    public:
    PlayerInstance() = default;

    Vector3 position;
    Vector3 rotation;
    float speed;
    float health;
    int totalammo;
    Scenes currentScene;
};
