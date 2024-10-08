#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter the array elements: ";

    int countOdd = 0, countEven = 0;

    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            ++countEven;
        } else {
            ++countOdd;
        }
    }

    cout << "Number of odd numbers: " << countOdd << endl;
    cout << "Number of even numbers: " << countEven << endl;

    delete[] arr;
    return 0;
}
