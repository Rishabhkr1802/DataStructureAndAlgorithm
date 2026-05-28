// Program to find square root of given number;

#include <iostream>
using namespace std;

long long int squareRoot(int num) {
  int start = 0;
  int end   = num;
  int ans   = 1;

  while (start <= end) {
    int mid              = start + (end - start) / 2;
    long long int square = mid * mid;

    if (square > num) {
      end = mid - 1;
    } else {
      start = mid + 1;
      ans   = mid;
    }
  }
  return ans;
}

double findPrecision(int num, int precision, int tempAns) {
  double factor = 1;
  double ans    = tempAns;

  for (int i = 1; i <= precision; i++) {
    factor = factor / 10;

    for (double j = ans; j * j < num; j = j + factor) {
      ans = j;
    }
  }

  return ans;
}

int main() {
  int num;
  cout << "Enter the number want to find square root : - ";
  cin >> num;

  int ans            = squareRoot(num);
  double precisedAns = findPrecision(num, 3, ans);
  cout << "Square Root of " << num << " is : - " << precisedAns;

  return 0;
}
