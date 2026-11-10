#include <iostream>
#include <cmath>
using namespace std;


double Degrees2Radians(double D) { // turns degrees to radians

        double R = D * 3.14159265358979323846/180;
        return(R);
}

int Drawline(char c, int numRepetitions) { // new line of characters then a new line
        for (int i = 0; i < numRepetitions; i++) {
                cout << c;
        }
        cout << endl;
        return numRepetitions;
}

int doPrinting(int highest, int angleIncrement, char characterToPrint, int numberOfCharsToPrint) { // prints sine angle and new line for every 90 degrees
        int count = 0;
        for (int angle = 0; angle <= highest; angle += angleIncrement) {
                cout << "sin(" << angle << ") = " << sin(Degrees2Radians(angle)) << endl;
                count++;
                if (angle % 90 == 0) {
                        Drawline(characterToPrint, numberOfCharsToPrint);
                }
        }
        return count;
}

int doGraphing(int highest, int angleIncrement) { // draws sine with X
        int rows = 0;
        for (int angle = 0; angle <= highest; angle += angleIncrement) {
                int spaces = sin(Degrees2Radians(angle)) * 20 + 20;
                for (int i = 0; i < spaces; i++) {
                        cout << " ";
                }
                cout << "X" << endl;
                rows++;
        }
        return rows;
}

int main() {
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(5);

int Degrees;
int increment;
char graph;
cout << "Perform calculations from angle=0 to what value (in degrees)? ";

cin >> Degrees;
cout << "How often should the angle be incremented? ";
cin >> increment;
cout << "Graph it? ";
cin >> graph;
// draw angle if user agrees
if (graph == 'Y' || graph == 'y') {
        doGraphing(Degrees, increment);
}
else { // prints the values with a new line 
        char lineChar;
        int lineLength;
        cout << "Make the line from what character? ";
        cin >> lineChar;
        cout << "How many characters form a line? ";
        cin >> lineLength;
        doPrinting(Degrees, increment, lineChar, lineLength);
}

return 0;
}