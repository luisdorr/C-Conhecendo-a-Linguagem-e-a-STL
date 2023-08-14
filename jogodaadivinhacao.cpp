#include <iostream>

using namespace std;

int main() {
    cout << "*************************************" << endl;
    cout << "* Welcome to the Guessing Game! *" << endl;
    cout << "*************************************" << endl;

    const int SECRET_NUMBER = 32;

    int guess;
    cout << "What's your guess? ";
    cin >> guess;

    cout << "Your guess value is: " << guess << endl;

    bool correct = guess == SECRET_NUMBER;

    if (correct) {
        cout << "Congratulations, you guessed the secret number!" << endl;
    } else {
        cout << "You missed! ";
        if (guess > SECRET_NUMBER) {
            cout << "Your guess was higher than the secret number!";
        } else if (guess < SECRET_NUMBER) {
            cout << "Your guess was lower than the secret number!";
        }
    }
}