#include <iostream>
#include <vector>

int main() {
    const int chosenNumber = 11;
    int userGuess = 0;
    std::vector<int> guesses;

    while (userGuess != chosenNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        guesses.push_back(userGuess);

        if (userGuess > chosenNumber) {
            std::cout << "Too high!\n";
        } else if (userGuess < chosenNumber) {
            std::cout << "Too low!\n";
        } else {
            std::cout << "Correct!\n";
        }
    }

    std::cout << "\nAll your guesses:\n";
    for (int i = 0; i < guesses.size(); i++) {
        std::cout << "Guess " << (i + 1) << ": " << guesses[i] << "\n";
    }

    return 0;
}