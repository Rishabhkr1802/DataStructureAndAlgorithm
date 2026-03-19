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

  for (int row=1; row<=number; row++) {
    for (int col=1; col<row; col++){
      cout << "   ";
    }

    for(int col=1; col<=number - row + 1; col++) {
      cout << " * ";
    }
    cout << endl;
  }

  return 0;
}