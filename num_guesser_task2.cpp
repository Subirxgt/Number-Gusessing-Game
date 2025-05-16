#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    // Seed random number generator
    srand(time(0));

    int randomNumber = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess;
    
    cout << "Guess the number between 1 and 100!\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        }
        else if (userGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        }
        else {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
            break; // Exit the loop when correct
        }
    }

    return 0;
}
