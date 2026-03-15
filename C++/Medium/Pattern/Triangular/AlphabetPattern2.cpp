// Program to print triangular Alphabet pattern;

/*

A
B B
C C C
D D D D

*/

#include <iostream>
using namespace std;

int main() {
  int number;
  char ch = 'A' ;
  cout << "Enter the number of lines : ";
  cin >> number;

  for (int row=1; row<=number; row++){
    for (int col=1; col<=row; col++){
      cout << ch << " ";
    }
    cout << endl;
    ch = ch + 1;
  }

  return 0;
}