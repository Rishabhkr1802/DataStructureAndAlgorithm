// Program for linear search...

#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int num) {
  for(int i=0; i<size; i++) {
    if(arr[i] == num) {
      return true;
    }
  }
  return false;
}

int main() {
  int number, temp;
  int arr[5] =  {12, 32, 43, 54, 64};

  cout << "Enter a number : " << endl;
  cin >> number;

  bool found = linearSearch(arr, 5, number);
  
  if(found) {
    cout << number << " is found in an array";
  }
  else {
    cout << number << " is not found in an array";
  }

  return 0;
}