// Program to print Counter triangular pattern;

/*

1
2 3
4 5 6
7 8 9 10

*/

#include <iostream>
using namespace std;

int main() {
  int number, count=1;
  cout << "Enter the number of lines : ";
  cin >> number;

  for (int row=0; row<=number; row++) {
    for (int col=0; col<row; col++) {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }

  return 0;
}