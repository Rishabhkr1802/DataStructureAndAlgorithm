// Program to find first and last occurance of an input k element in the sorted array
// e.g [0, 1, 1, 1, 1, 3, 7] , input 1 then ans : 1, 4

#include <iostream>
using namespace std;

int firstOccurance(int arr[], int size, int num) {
  int start = 0;
  int end   = size - 1;
  int ans   = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (num == arr[mid]) {
      ans = mid;
      end = mid - 1;  // move left
    } else if (num > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return ans;
}

int lastOccurance(int arr[], int size, int num) {
  int start = 0;
  int end   = size - 1;
  int ans   = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (num == arr[mid]) {
      ans   = mid;
      start = mid + 1;  // move right
    } else if (num > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return ans;
}

int main() {
  int arr[8] = {0, 1, 1, 1, 1, 3, 3, 3};
  int size   = 8;
  int num;

  cout << "Enter the number : ";
  cin >> num;

  int first = firstOccurance(arr, size, num);
  cout << "First Occurance of " << num << " is: " << first << endl;

  int last = lastOccurance(arr, size, num);
  cout << "Last Occurance of " << num << " is: " << last << endl;
  
  //Additional find number of occurance present
  int total = (last - first) + 1;
  cout << "Total no of Occurance of " << num << " is: " << total << endl;


  return 0;
}