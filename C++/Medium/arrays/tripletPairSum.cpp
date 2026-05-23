// Program to find Triplet pair sum number in the given array;
// e.g [1,2,2,3,7] user input 6 then 1,2,3

#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 2, 5};
  int size  = sizeof(arr) / sizeof(int);
  int num, i, j, k;

  cout << "Enter the number :- ";
  cin >> num;

  for (i = 0; i < size; i++) {
    for (j = i + 1; j < size; j++) {
      for (k = j + 1; k < size; k++) {
        if (arr[i] + arr[j] + arr[k] == num) {
          cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
        }
      }
    }
  }

  // OR

  // for (i = 0, j = i + 1, k = j + 1; i < size && j < size && k < size; i++, j++, k++) {
  //   if (arr[i] + arr[j] + arr[k] == num) {
  //     cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
  //   }
  // }

  return 0;
}