// Program to swap number with alternate number in array

// e.g. [ 1, 2, 3, 4, 5]
// e.g. [ 2, 1, 4, 3, 5]

#include <iostream>
using namespace std;

void userInputArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

void swapAlternateElements(int arr[], int size) {
  for (int i = 0; i < size - 1; i += 2) {  // Important
    int temp   = arr[i];
    arr[i]     = arr[i + 1];
    arr[i + 1] = temp;

    // or
    // swap(arr[i], arr[i+1]);
  }
}

int main() {
  int arr[100];
  int size;

  cout << "Enter the size of array: - ";
  cin >> size;
  cout << "Enter the array elements: - \n";

  userInputArray(arr, size);

  cout << "Input Array elements : - ";
  printArray(arr, size);

  swapAlternateElements(arr, size);

  cout << "\nSwap Array elements : - ";
  printArray(arr, size);

  return 0;
}