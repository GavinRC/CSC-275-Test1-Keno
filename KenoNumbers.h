#ifndef CSC_275_TEST1_KENO_KENONUMBERS_H
#define CSC_275_TEST1_KENO_KENONUMBERS_H

#include <vector>

class KenoNumbers {
    std::vector<int> m_numbers; // (Encapsulation) Only the Player's own methods can change it, and makes other classes / code use the getter method.
public:
    // The following methods are examples of abstraction as they hide how the random numbers are generated
    void generateNumbers(); // A interface method that generates the keno numbers.
    void printKenoNumbers(); // Displays the keno numbers.
    void clearKenoNumbers(); // Resets the vector containing the keno numbers.
    std::vector<int> getKenoNumbers(); // Returns a copy of the keno numbers.
};

#endif //CSC_275_TEST1_KENO_KENONUMBERS_H
