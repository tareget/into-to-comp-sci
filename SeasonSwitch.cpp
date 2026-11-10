//Yonas Klinowski
#include <iostream>
#include <string> 
using namespace std; 

int main() {
	int Month;
    cout << "Enter a month number : ";
    cin >> Month;

    switch (Month) {
        case 12:
        case 1:
        case 2:
            cout << "It is Winter" << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "It is Spring" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "It is Summer" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "It is Fall" << endl;
            break;
        default:
            cout << "Invalid month. Enter number 1-12" << endl;
    
    }
    return 0;
}

