// Program to find the given number is prime number or not;

#include <iostream>
using namespace std;

int main()
{
  int number;
  bool isPrime = true;

  cout << "Enter the number : ";
  cin >> number;

  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
    {
      isPrime = false;
      cout << number << " is not a Prime number";
      break;
    }
  }

  if (isPrime == true)
  {
    cout << number << " is a Prime number";
  }

  return 0;
}