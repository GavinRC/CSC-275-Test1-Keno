#ifndef CSC_275_TEST1_KENO_GAME_H
#define CSC_275_TEST1_KENO_GAME_H

#include <vector>
#include "KenoNumbers.h"
#include "Player.h"

class Game {
    // (Encapsulation) These members are private so only Game can change them, no outside influence
    // Declares and instantiates instances of the KenoNumbers and Player classes.
    KenoNumbers m_keno;
    Player m_player;
    std::vector<int> m_matches;
public:
    // The game constructor is an example of abstraction as it just creates the game without knowing the details
    Game(); // Default constructor method
    void printMatches(std::vector<int> playerPicks, std::vector<int>kenoNumbers); // Displays the numbers that match
    void displayResults(); // Display all results
    void playGame(); // Starts a loop and plays the game
};

#endif //CSC_275_TEST1_KENO_GAME_H
