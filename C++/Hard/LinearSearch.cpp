// Program for linear search...

#include <iostream>
using namespace std;

int main() {
  int number, temp;
  int arr[5] =  {12, 32, 43, 54, 64};

  cout << "Enter a number : " << endl;
  cin >> number;

  for (int i = 0; i<arr.length; i++) {
    if(arr[i] === number) {
      cout << "The Number is Present in array";
      break;
    }
  }

  return 0;
}