#include <iostream>
using namespace std;

void read2Int(int &a, int &b) {
	cin >> a >> b;
}

void Print2Int(int a, int b) {
	cout << a << " " << b << endl;
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapAndMult(int &a, int &b, int multiplier) {
	swap(a, b);
	a *= multiplier;
	b *= multiplier;
}

int main() {
	int num1, num2, multiplier;

	cout << "Input two numbers: ";
	read2Int(num1, num2);
	Print2Int(num1, num2);
	
	swap(num1, num2);
	cout << "After swap:" << endl;
	Print2Int(num1, num2);

	cout << "Enter the multiplier: ";
	cin >> multiplier;
	cout << multiplier << endl;

	swapAndMult(num1, num2, multiplier);
	cout << "After swap and mult:" << endl;
	Print2Int(num1, num2);

	return 0;
}

