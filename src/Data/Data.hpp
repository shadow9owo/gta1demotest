#pragma once

#include "PlayerInstance/PlayerInstance.hpp"
#include "BuildInstance/Buildinstance.hpp"

namespace GTA1GLOBAL
{
    class Data
    {
        public:
        Data() = default;

        static PlayerInstance player;
        static BuildInstance build;
    };

    extern Data InitializeData();
}