// Program to calculate ncr value
// ncr = ( n! / (r! * (n -r)! ) )

#include <iostream>
using namespace std;

int factorial(int num) {
  int fact = 1;
  
  for (int i=1; i<=num; i++) {
    fact = fact * i;
  }

  return fact;
}

int ncr(int n, int r) {
  int numerator   = factorial(n);
  int denominator = factorial(r) * factorial(n-r);
  int answer      = numerator/denominator;

  return answer;
}

int main() {
  int n, r;

  cout << "Enter the value of n: - ";
  cin >> n;

  cout << "Enter the value of r: - ";
  cin >> r;

  int ans = ncr(n ,r);
  cout << "Answer is : - " << ans;
}