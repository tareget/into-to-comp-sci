#include <iostream>
using namespace std;

int main() {
    double result, num;
    char Operation;

    cout << "Simple calculator" << endl;
    cout << "give a first number: ";
    cin >> result;

    cout << "choose an operation: ";
    while (Operation >>  && Operation != 'q') {
        if (Operation == '+') {
            cout << "choose a number to add: ";
            cin >> num;
            cout << result << "+" << num << " = " << result + num << endl;
            result += num;
        } else if (Operation == 'x') {
            cout << "choose a number to multiply: ";
            cin >> num;
            cout << result << "x" << num << " = " << result * num << endl;
            result *= num;
        }
        cout << "choose an operation: ";
    }

    cout << "Finished!" endl;
    return 0;
}