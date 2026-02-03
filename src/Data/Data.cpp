#include "Data.hpp"

namespace GTA1GLOBAL
{
    Data data;

    PlayerInstance Data::player;
    BuildInstance Data::build;

    Data InitializeData()
    {
        Data data_instance = {};

        data_instance.player.position = {0.0f, 0.0f, 0.0f};
        data_instance.player.rotation = {0.0f, 0.0f, 0.0f};
        data_instance.player.speed = 0.0f;
        data_instance.player.health = 100.0f;
        data_instance.player.totalammo = 50;
        data_instance.player.currentScene = Scenes::S_MAINMENU;

        data_instance.build.buildNumber = 1;
        data_instance.build.debugmode = false;
        if (!data_instance.build.debugmode)
        {
            static_assert("Remember to change me before release okay?");
        }

        return data_instance;
    }
}