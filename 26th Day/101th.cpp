#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;
    
    cout << "========================================" << endl;
    cout << "  Welcome to the Number Guessing Game!  " << endl;
    cout << "========================================" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl << endl;
    
    while (guess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        
        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "\nCongratulations! You guessed the number in " << attempts << " attempts!" << endl;
        }
    }
    
    return 0;
}