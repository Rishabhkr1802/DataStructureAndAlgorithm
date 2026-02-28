// Program to find the given no is even or odd number;

#include <iostream>
using namespace std;

int main()
{
  int number;

  cout << "Enter the number : ";
  cin >> number;

  if (number % 2 == 0)
  {
    cout << number << " is a even number";
  }
  else
  {
    cout << number << " is a odd number";
  }

  return 0;
}