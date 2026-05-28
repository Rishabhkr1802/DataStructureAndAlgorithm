// Program to search an element in the rotated array (most imp question)
// e.g arr = [1, 2, 3, 7, 8,] rotated array is [7, 8, 1, 2, 3] and pivot is 1

#include <iostream>
using namespace std;

int getPivot(int arr[], int size) {
  int start = 0;
  int end   = size - 1;

  while (start < end) {
    int mid = start + (end - start) / 2;

    if (arr[mid] >= arr[0]) {
      start = mid + 1;
    } else {
      end = mid;
    }
  }
  return start;
}

int binarySearch(int arr[], int s, int e, int num) {
  int start = s;
  int end   = e;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == num) {
      return arr[mid];
    } else if (num > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return -1;
}

int main() {
  int arr[5] = {7, 8, 1, 2, 3};
  int length = sizeof(arr) / sizeof(int);
  int num;

  cout << "Enter the element want to search : ";
  cin >> num;

  int pivot = getPivot(arr, length);

  if (num > arr[pivot] && num <= arr[length - 1]) {
    return binarySearch(arr, pivot, length - 1, num);
  } else {
    return binarySearch(arr, 0, pivot - 1, num);
  }

  return 0;
}