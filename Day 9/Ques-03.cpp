#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int* ptr = &num;
    int** ptr2 = &ptr;

    cout << "Value of num (using variable): " << num << endl;
    cout << "Value of num (using pointer): " << *ptr << endl;
    cout << "Value of num (using pointer to pointer): " << **ptr2 << endl;

    return 0;
}
