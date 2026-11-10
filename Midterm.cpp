#include <iostream>
using namespace std;


int main() {

char Operation;
double result, num;


cout << "Simple calculator" << endl;

cout << "Give a first number: ";
cin >> result;


cout << "Choose an operation: ";
while (cin >> Operation && Operation != 'q') {
	if (Operation == '+') {
		cout << "Choose a number to add: ";
		cin >> num;
	cout << result << " + " << num << " = " << result + num << endl;
		result += num;
	} else if ( Operation == 'x') {
		cout << "Choose a number to multiply: ";
		cin >> num;
		cout << result << " x " << num << " = " << result * num << endl;
                result *= num;	
       } 
       cout << "Choose an operation: ";
       
    }	
    
    cout << "Finished!" << endl;
    return 0;
}
