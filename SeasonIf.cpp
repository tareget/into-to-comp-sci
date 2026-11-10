//Yonas Klinowski
#include <iostream>
#include <string> // i dont even think i need this one but 
using namespace std; // need dat (im not putting std:: behind everything) 
int main() {
	
int Month; // intialize Month
    // take user input for Month
    cout << "Enter month number between 1 and 12" << endl;
    cin >> Month;
    // error handle - invalid response
    if(( Month < 1) || ( Month > 12)) {  
	cout << "Invalid month. Enter number 1-12" << endl;
	}
    else  if (( Month == 12) || ( Month <=  2)) { // winter output 
        cout << "It is Winter" << endl;
        } 
    else if (( Month >= 3) && ( Month <= 5)) { // spring output
        cout << "It is Spring" << endl;
        }
    else if (( Month >= 6 ) && ( Month <= 8)) { // summer output
        cout << "It is Summer" << endl;
        }
    else { // fall output
        cout << "It is Fall" << endl;
	}

return 0; // return value 
// thank you for reading
}
