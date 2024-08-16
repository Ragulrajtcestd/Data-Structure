#include <iostream>
using namespace std;

int Occur(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {2, 4, 6, 4, 7, 9, 4, 2};
    int key = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    int occurs=Occur(arr,n,key);

    cout<<"Number of occurrences of" <<key<<"in the array: "<<occurs<< endl;
}

