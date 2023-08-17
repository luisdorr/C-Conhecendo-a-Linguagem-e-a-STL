#include <iostream>

using namespace std;

int main() {
    cout << "*********************************" << endl;
    cout << "* Welcome to the Guessing Game! *" << endl;
    cout << "*********************************" << endl;

    cout << "Choose your game difficulty: Easy (E), Medium (M) or Hard (H)";

    char difficulty;
    cin >> difficulty;

    int number_of_attempts;
    if (difficulty == 'E') {
        number_of_attempts = 15;
    } else if (difficulty == 'M') {
        number_of_attempts = 10;
    } else {
        number_of_attempts = 5;
    }

    const int SECRET_NUMBER = 42;

    bool wrong_answer = true;
    int count_tries = 0;

    double points = 1000.0;

    for (count_tries = 1; count_tries <= number_of_attempts; count_tries++) {
        count_tries++;
        int guess;
        cout << "Tries: " << count_tries << endl;
        cout << "What's your guess? ";
        cin >> guess;

        double lost_points = abs(guess - SECRET_NUMBER)/2.0;
        points = points - lost_points;

        cout << "Your guess value is: " << guess << endl;
        bool right_answer = guess == SECRET_NUMBER;
        bool higher = guess > SECRET_NUMBER;

        if (right_answer) {
            cout << "Congratulations, you guessed the secret number!" << endl;
            wrong_answer = false;
            break;
        } else if (higher) {
            cout << "Your guess was higher than the secret number!";
        } else {
            cout << "Your guess was lower than the secret number!";
        }
    }
    cout << "End Game!" << endl;
    if (wrong_answer) {
        cout << "You lose! Try again next time!";
    } else {
        cout << "You hit the secret number on the " << count_tries << "th attempt! ";
        cout << "Your punctuation was  " << points << "!";
    }


}