// Program to find number using binary search 

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size, int num) {
  for (int i=1; i<=size/2; i++ ) {
    
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