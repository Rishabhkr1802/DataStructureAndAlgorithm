// Program to find Pivot element of arrays
// e.g [6, 7, 9, 2, 4, 5] want to find pivot (lower monotonius) (min) i.e  2

#include <iostream>
using namespace std;

int main() {
  int arr[6] = {6, 7, 9, 2, 4, 5};

  int size  = 6;
  int start = 0;
  int end   = size - 1;

  while (start < end) {  // important
    int mid = start + (end - start) / 2;

    if (arr[mid] > arr[0]) {
      start = mid + 1;
    } else {
      end = mid;  // imp
    }
  }

  cout << "Pivot Element of Array is : - " << arr[start];
  return 0;
}