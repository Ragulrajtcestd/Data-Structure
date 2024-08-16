#include <iostream>
using namespace std;

int countEven(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] % 2 == 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low;
}

int countOdd(int arr[], int n) {
    return n - countEven(arr, n);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int evenCount = countEven(arr, n);
    int oddCount = countOdd(arr, n);

    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    return 0;
}
