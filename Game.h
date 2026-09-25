#pragma once

#include "Enemy.h"
#include "Player.h"


class Game
{
    Player* Player = nullptr;
    std::vector<Enemy*> Enemies;
};

