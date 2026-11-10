#include <iostream>
using namespace std;

int main() {
    int milesLeft = 14;
    int turnsLeft = 4;

    while (turnsLeft > 0 && milesLeft > 0) {
        cout << "You are " << milesLeft << " mile(s) from campus! You have " << turnsLeft << " turns remaining" << endl;

        int choice;

        bool valid = false;

        while (!valid) {
            cout << "Travel by:" << endl;
            cout << "[1]Bus = 2 miles, [2]Subway = 5 miles, [3]Jetpack = 10 miles" << endl;
            cout << "How do you wish to travel? ";
            cin >> choice;

            if (choice >= 1 && choice <= 3) {
                valid = true;
            } else {
                cout << "Invalid choice, try again!" << endl;
            }
        }

        if (choice == 1) {
            milesLeft -= 2;
        } else if (choice == 2) {
            milesLeft -= 5;
        } else {
            milesLeft -= 10;
        }

        turnsLeft--;
    }

    cout << endl;
    if (milesLeft == 0) {
        cout << "You landed exactly!" << endl;
        cout << "You won!" << endl;
    } else if (milesLeft < 0) {
        cout << "You over-shot campus by " << -milesLeft << " miles!" << endl;
        cout << "You lose!" << endl;
    } else {
        cout << "You were short of campus by " << milesLeft << " miles!" << endl;
        cout << "You lose!" << endl;
    }

    return 0;
}
