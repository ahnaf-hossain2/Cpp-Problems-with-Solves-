#include <iostream>
using namespace std;

int sumOfArray(int arr[], int arrSize) {
    int sum = 0;
    for (int i=0; i < arrSize; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arrSize;
	cout << "Enter the size of the array: ";
	cin >> arrSize;
	int arr[arrSize];
    cout << "Enter "<< arrSize << " elements of the array: ";
	for (int i=0; i < arrSize; ++i) {
		cin >> arr[i];
	}
    cout << "The sum of the array is: " << sumOfArray(arr, arrSize) << endl;
    return 0;
}
