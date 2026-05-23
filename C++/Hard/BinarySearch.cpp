// Program to find number using binary search
// binary search only works on monotonius functions like array should be in increatment or decreament manner e.g sort

#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size, int num) {
  int start = 0, end = size - 1, mid;
  mid = (start + end) / 2;

  while (start <= end) {
    if (num == arr[mid]) {
      return true;
    }

    if (num > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = (start + end) / 2;
  }

  return false;
}

void checkElementFound(int arr[], int size, int num) {
  bool found = binarySearch(arr, size, num);

  if (found) {
    cout << num << " is found";
  } else {
    cout << num << " is not found";
  }
}

int main() {
  int even[6] = {3, 4, 8, 19, 38, 83};
  int odd[5]  = {1, 3, 5, 9, 29};
  int number;

  cout << "Enter the number :- ";
  cin >> number;

  // checkElementFound(even, 6, number);
  checkElementFound(odd, 5, number);

  return 0;
}