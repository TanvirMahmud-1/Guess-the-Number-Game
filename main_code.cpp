#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Seed the random number generator with current time
    srand(time(0));

    int maxNumber = 100;
    int numberToGuess = rand() % maxNumber + 1; // Random number between 1 and 100
    int userGuess;
    int attempts = 0;          // Count how many guesses user took


    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and " << maxNumber << "." << endl;
    cout << "Try to guess it!" << endl;


    // Loop until user guesses correctly

    do
    {
        cout << "Enter your guess: ";
        cin >> userGuess; 
        attempts++; 

        if (userGuess > numberToGuess)
        {
            cout << "Too high! Try again." << endl;
        }

        else if (userGuess < numberToGuess)
        {
            cout << "Too low! Try again." << endl;
        }

        else
        {
            cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;
        }

    } 


     // Keep looping until guess is correct

    while (userGuess != numberToGuess); 

    return 0;
}
