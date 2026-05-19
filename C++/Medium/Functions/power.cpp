// Program to find power

#include<iostream>
using namespace std;

int power(int base, int power) {
  int ans = 1;

  for(int i=1; i<=power; i++) {
    ans = ans * base;
  }

  return ans;
}

int main() {
  int a, b;
  
  cout << "Enter the base digit : - ";
  cin >> a;
  cout << "Enter the power : - ";
  cin >> b;

  int ans = power(a, b);
  
  cout << "Answer is : -  " << ans;
}