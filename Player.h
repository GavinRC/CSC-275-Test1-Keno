#ifndef CSC_275_TEST1_KENO_PLAYER_H
#define CSC_275_TEST1_KENO_PLAYER_H

#include <vector>

class Player {
    std::vector<int> m_playerNumbers; // (Encapsulation) Private so other classes / code cannot access it and they have to go through the getter method.
public:
    // The following are examples of abstraction as they prompt the player for numbers and hides the code as callers don't need to know how the input is validated.
    void inputPlayerNumbers(); // Prompts the player for numbers
    void printPlayerNumbers(); // Displays the player chosen numbers
    void clearPlayerNumbers(); // Clears the players chosen numbers
    std::vector<int> getPlayerNumbers(); // Returns a copy of the players chosen numbers
};

#endif
