#pragma once

#include <iostream>
#include <string>

class DialogueSystem {
public:
    void showText(const std::string& text) {
        std::cout << text << std::endl;
    }
};