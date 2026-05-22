// Program to find unique element inside array  n = 2m +1

#include <iostream>
using namespace std;

int main() {
  int arr[5] = {2, 1, 3, 2, 1};
  int length = sizeof(arr) / sizeof(arr[0]);
  int ans    = 0;

  for (int i = 0; i < length; i++) {
    ans = ans ^ arr[i];
  }
  cout << ans;
}