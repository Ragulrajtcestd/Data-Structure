#include <iostream>
#include <unordered_set>
using namespace std;
int uni(int arr[], int n) {
   unordered_set<int> uniqueElements;

    for (int i = 0; i < n; ++i) {
        uniqueElements.insert(arr[i]);
    }

    return uniqueElements.size();
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int uniqueCount =uni(arr,n);

    cout << "Number of unique elements: " << uniqueCount <<endl;

}

