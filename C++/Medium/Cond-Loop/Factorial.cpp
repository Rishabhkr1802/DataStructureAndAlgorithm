// Program to find factorial number;

#include <iostream>
using namespace std;

int main() {
  int number;
  int fact = 1;

  cout << "Enter the number : ";
  cin >> number;

  for (int i=1; i<=number; i++) {
    fact = fact * i;
  }

  cout << "Factorial of " << number << " is : " << fact;
  return 0;
}