// Program to find number using binary search 

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size, int num) {
  int start, end, mid;
  start = arr[0];
  end = arr[size - 1];
  mid = (start + end ) /2;
  for (int i=1; i<=mid; i++ ) {
    
  }
  return false;
}

int main() { 

  int arr[5] = {43, 52, 65, 71, 89};
  int number;

  cout << "Enter the number :- ";
  cin >> number;

  bool found = binarySearch(arr, 5, number);

  if (found) {
    cout << number << " is found";
  } else {
    cout << number << " is not found";
  }

  return 0;
}