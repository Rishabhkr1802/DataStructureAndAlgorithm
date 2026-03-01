// Program to find fibonacci series;

#include <iostream>
using namespace std;

int main() {
  int a = -1, b = 1;
  int number;
  int sum = 0;

  cout << "Enter the number : ";
  cin >> number;

  for (int i=1; i<=number; i++) {
    sum = a + b;
    cout << sum << " ";
    a = b;
    b = sum;
  }

  return 0;
}