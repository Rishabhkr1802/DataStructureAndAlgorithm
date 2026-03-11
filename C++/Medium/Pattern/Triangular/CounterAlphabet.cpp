// Program to print triangular Counter Alphabet pattern;

/*

A
B C
D E F
G H I J
K L M N O

*/

#include <iostream>
using namespace std;

int main() {
  int number;
  char ch = 'A';
  cout << "Enter the number of lines : ";
  cin >> number;

  for (int i=0; i<=number; i++) {
    for (int j=0; j<i; j++) {
      cout << ch << " ";
      ch = ch + 1;
    }
    cout << endl;
  }

  return 0;
}