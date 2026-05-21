// Program to calculate the fibonacci series via user input 

#include<iostream>
using namespace std;

void fibonacci(int num){
  int a = -1, b = 1, sum = 0;

  for(int i = 1; i <=num; i++){
    sum = a + b;
    cout << " " << sum << " ";
    a = b;
    b = sum;
  }
}

int main(){

  int num;
  cout << "Enter the range want to find fibonacci series: - ";
  cin >> num;

  fibonacci(num);

  return 0;
}