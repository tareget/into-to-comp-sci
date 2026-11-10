#include <iostream> 
using namespace std;
// importing iostream 

//skeleton function
void FillArray(int arr[], int size);
void PrintArray(string name, int arr[], int size);

// my main function where i print and fill the array
int main() {
	int firstArray[10];
	
	FillArray(firstArray, 10);
	PrintArray("firstArray", firstArray, 10);
}
// the function that is called that does the filling of the array taking 100 and adding its element number
void FillArray(int arr[], int size) {
	for (int i = 0; i  < size; ++i) {
		arr[i] = 100 + i;
	}
}
// prints the array with the element of the array and the fillarray function results
void PrintArray(string name, int arr[], int size) {
	for (int i = 0; i <size; ++i) {
		cout << name << "[" << i << "]" << "=" << arr[i] << endl;
	}
}
