// Program to find peak index of mountain arrays
// e.g [3, 4, 5, 6, 4, 2, 1] want to find peak index(max) i.e 6

#include <iostream>
using namespace std;

int main() {
  int mountainArray[7] = {3, 4, 5, 6, 4, 2, 1};

  int size  = 7;
  int start = 0;
  int end   = size - 1;

  while (start < end) {  // important
    int mid = start + (end - start) / 2;

    if (mountainArray[mid] < mountainArray[mid + 1]) {
      start = mid + 1;
    } else {
      end = mid;  // imp
    }
  }

  cout << "Peak Index of Mountain Array is : - " << mountainArray[start];
  return 0;
}