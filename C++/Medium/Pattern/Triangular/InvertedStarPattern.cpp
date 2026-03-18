// Program to print star pattern;

/*

* * * * *
* * * *
* * *
* *
*

*/

#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter the number : ";
  cin >> number;

  for (int row=number; row > 0; row--) {
    for (int col=row; col > 0; col--) {
      cout << " * ";
    }
    cout << endl;
  }

  return 0;
}