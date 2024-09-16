#include <iostream>
using namespace std;

int findTargetIndex(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i + 1;  // 1-based indexing
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    cout << findTargetIndex(arr, size, target) << endl;

    return 0;
}
