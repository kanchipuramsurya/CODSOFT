#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have selected a number between 1 and 100. Try to guess it!\n\n";

    // Keep looping until the user guesses the correct number
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        // Check if the guess is correct
        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number: " << secretNumber << std::endl;
            break;
        }
        // Provide feedback if the guess is too high
        else if (guess > secretNumber) {
            std::cout << "Too high! Try again.\n\n";
        }
        // Provide feedback if the guess is too low
        else {
            std::cout << "Too low! Try again.\n\n";
        }
    }

    return 0;
}

