#include <iostream>
#include <string>
using namespace std;
 
int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
 
    string Customer;
    int coffee, bagel, donut; 
    double total, paid;
 
    // intro to coffee shop takes in customers name
    cout << "Welcome to our Coffeeshop!" << endl;
    cout << "What is your first name? "; 
    cin >> Customer;
    cout << "Welcome " << Customer << endl;
 
    // getting customers order and saving it to memory 
    cout << "How many coffees? ";
    cin >> coffee;
    cout << "How many bagels? ";
    cin >> bagel;
    cout << "How many donuts? ";
    cin >> donut;
 
    //calculating total
    total = (coffee * 2.50 + bagel * 1.75 + donut * 1.00) * 1.085;
    cout << "Your total is: $" << total << endl;
 
    // paid by customer
    cout << "How much will you pay? ";
    cin >> paid;
 
    // final total of what they got and change to be paid back
    cout << "Receipt for Customer: " << Customer << endl;
    cout << "Coffees: " << coffee << endl;
    cout << "Bagels: " << bagel << endl;
    cout << "Donuts: " << donut << endl;
    cout << "Total is: $" << total << endl;
    cout << "Your change is: $" << paid - total << endl;
 
    return 0;
    }
 