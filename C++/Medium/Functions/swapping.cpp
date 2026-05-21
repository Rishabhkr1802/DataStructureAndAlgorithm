// Program to swap a number

#include<iostream>
using namespace std;

int swapping(int num1, int num2){
  int temp;

  temp = num1;
  num1 = num2;
  num2 = temp;

  cout << "New value of a is : " << num1 << endl;
  cout << "New value of b is : " << num2;
}

int swappingWithout3rdVar(int c, int d){
  c = c + d;
  d = c - d;
  c = c - d;
  cout << "New value of a is : " << c << endl;
  cout << "New value of b is : " << d;
}

int main() {

  int a, b;
  cout << "Enter the value of a : - ";
  cin >> a;
  cout << "Enter the value of b : - ";
  cin >> b;

  // swapping(a, b);
  swappingWithout3rdVar(a, b);

  return 0;
}