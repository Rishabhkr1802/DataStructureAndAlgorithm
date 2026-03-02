// Program to Print matric like having continue counting number pattern;

/*

1 2 3
4 5 6
7 8 9

*/

#include <iostream>
using namespace std;

int main()
{
  int number;
  int count = 1;
  int row, col;

  cout << "Enter the number ";
  cin >> number;

  for (row = 1; row <= number; row++)
  {
    for (col = 1; col <= number; col++)
    {
      cout << count << " ";
      count = count + 1;
    }
    cout << endl;
  }

  return 0;
}