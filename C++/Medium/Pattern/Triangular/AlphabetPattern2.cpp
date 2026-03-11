// Program to print triangular Alphabet pattern;

/*

A
A B
A B C
A B C D

*/

#include <iostream>
using namespace std;

int main() {
  int number;
  char ch = 'A' ;
  cout << "Enter the number of lines : ";
  cin >> number;

  for (int i=0; i<=number; i++) {
    for (int j=i; j<i; j--) {
      cout << ch << " ";
      ch = ch + 1;
    }
    cout << endl;
  }

  return 0;
}