#include "engine.hpp"

void Engine::Init() {
    stageTexts = {
        "Welcome to the game!",
        "You see a path.",
        "You reached the end!"
    };
}

void Engine::LoopTime() {
    Player player;
    DialogueSystem dialogue;

    for (int i = 0; i < stageTexts.size(); i++) {
        dialogue.showText(stageTexts[i]);
    }
    std::cout << "Game Over!" << std::endl;
}

int main() {
    Engine game;
    game.Init();
    game.LoopTime();
    return 0;
}