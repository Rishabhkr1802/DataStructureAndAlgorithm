/* Program to return reverse a given number

number = 134
Result = 431
*/

#include<iostream>
using namespace std;

int main() {
  int number;
  int result = 0;
  cout << "Enter the number : - ";
  cin >> number;

  while (number != 0) {
    int bit = number % 10;
    cout << "bit : " << bit << endl;
    result = (result * 10) + bit;
    cout << "result : " << result << endl;
    number = number / 10;
    cout << "number : " << number << endl;
  }

  cout << "Reverse is : - " << result;
  return 0;
}