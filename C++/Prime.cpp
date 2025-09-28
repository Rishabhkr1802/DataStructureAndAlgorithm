//Program to identify the given number is prime number or non-prime

#include<iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true;
    cout << "Please enter a no :  ";
    cin >> n;

    for (i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            cout << "The Giver no is not a prime no";
            isPrime = false;
            break;
        }
    }

    if (isPrime == true) {
        cout << n << " : is a Prime number";
    }
    return 0;
}