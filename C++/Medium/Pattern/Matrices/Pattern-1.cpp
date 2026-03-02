// Program to Print matric pattern;

/*

1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

*/

#include <iostream>
using namespace std;

int main()
{
  int number;
  int row, col;

  cout << "Enter the number : ";
  cin >> number;

  for (row=1; row<=number; row++) {
    for (col=1; col<=number; col++) {
      cout << row << " ";
    }
    cout << endl;
  }
  return 0;
}