// Program to Print matric like star pattern;

/*

* * * *
* * * *
* * * *
* * * *

*/

#include <iostream>
using namespace std;

int main()
{
  int number;
  int row, col;

  cout << "Enter the number ";
  cin >> number;

  for (row = 1; row <= number; row++)
  {
    for (col = 1; col <= number; col++)
    {
      cout << " * ";
    }
    cout << endl;
  }

  return 0;
}