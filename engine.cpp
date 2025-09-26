#include "engine.hpp"
#include <iostream>

void Engine::Init() {
    std::cout << "--- Initialization ---" << std::endl;
    
    // dialogueSystem.setup();
    // player.setup(); 
}

void Engine::LoopTime() {
    std::cout << "--- LoopTime ---" << std::endl;
    
    // 1. Input system
    // 2. Update game state
    // 3. Rendering
    
    if (!stageTexts.empty()) {
        std::cout << "Stage" << stageTexts.front() << std::endl;
    } else {
        std::cout << "Wainting for" << std::endl;
    }
}