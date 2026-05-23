// Program to find pair sum number in the given array;
// e.g [1,2,2,3,7] user input 5 then 1,4 or 2,2

#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 2, 5};
  int size  = sizeof(arr) / sizeof(int);
  int num, i, j;

  cout << "Enter the number :- ";
  cin >> num;

  // for (i = 0; i < size; i++) {
  //   for (j = i + 1; j < size; j++) {
  //     if (arr[i] + arr[j] == num) {
  //       cout << arr[i] << " " << arr[j] << endl;
  //     }
  //   }
  // }

  // OR

  for (i = 0, j = i + 1; i < size && j < size; i++, j++) {
    if (arr[i] + arr[j] == num) {
      cout << arr[i] << " " << arr[j] << endl;
    }
  }
  return 0;
}