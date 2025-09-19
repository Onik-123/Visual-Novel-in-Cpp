#pragma once

class Player {
public:
    int currentStage;
    int progress;
    std::string inventory[10];

    Player() : currentStage(0), progress(0) {}
};