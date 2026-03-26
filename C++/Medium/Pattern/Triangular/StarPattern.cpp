// Program to print star pattern;

/*

*
* *
* * *
* * * *

*/

#include <iostream>
using namespace std;

int main()
{
  int number;
  int row, col;

  cout << "Enter the number :";
  cin >> number;

  for (row = 1; row <= number; row++)
  {
    for (col = 1; col <= row; col++)
    {
      cout << " * ";
    }
    cout << endl;
  }
  return 0;
}