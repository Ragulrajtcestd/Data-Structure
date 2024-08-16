#include <iostream>
using namespace std;
int long_continue_int(int arr[], int n)
{
  int maxl= 0,count = 1;
  for (int i = 0; i<n-1; ++i)
    {
    if (arr[i+1]==arr[i]+1)
        {
            count++;
        }
    else
        {
          maxl = max(maxl, count);
          count = 1;
        }
    }
    maxl = max(maxl, count);
    return maxl;
}
int main() {
  int arr[] = {1,2,3,4,2,7,8,9,10,11,12,12};
  int n = sizeof(arr) / sizeof(arr[0]);
  int length = long_continue_int(arr, n);
  cout << "Length of longest consecutive integer subarray: " << length << endl;
  return 0;
}
