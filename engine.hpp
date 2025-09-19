#include <iostream>
#include <string>
#include <vector>

// -------------------- //

#include "player.hpp"
#include "dialogueSystem.hpp"

class Engine {
public:
    void Init();
    void LoopTime();
    std::vector<std::string> stageTexts;
};