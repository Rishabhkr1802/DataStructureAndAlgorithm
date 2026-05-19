// Program to find factorial using functions

#include<iostream>
using namespace std;

int factorial(int number){
  int fact = 1;

  for (int i=1; i<=number; i++) {
    fact = fact * i;
  }

  return fact;
}

int main() {

  int n, m;

  cout << "Enter a number : - ";
  cin >> n;
  
  int ans = factorial(n);
  cout << "Factorial of " << n << " is : - " << ans << endl;

  cout << "Enter a number : - ";
  cin >> m;
  
  int answer = factorial(m);
  cout << "Factorial of " << m << " is : - " << answer;
}