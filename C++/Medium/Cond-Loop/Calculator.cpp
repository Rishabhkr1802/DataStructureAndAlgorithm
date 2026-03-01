// Program to find addition, substraction, multiplication, division, modulas;

#include <iostream>
using namespace std;

int main() {
  int a, b;
  int result = 0;
  int operation;

  cout << "Enter the value of a : ";
  cin >> a;
  cout << "Enter the value of b : ";
  cin >> b;

  cout << "Please select the one option below : \n 1. Addition \n 2. Substraction \n 3. Multiplication \n 4. Division \n 5. Modulas\n";
  cin >> operation;

  switch (operation) {
    case 1 :  result = a + b;
              cout << "Addition of " << a << " and "  << b << " : " << result;
              break;
    
    case 2 :  result = a - b;
              cout << "Substraction of " << a << " and "  << b << " : " << result;
              break;
    
    case 3 :  result = a * b;
              cout << "Multiplication of " << a << " and "  << b << " : " << result;
              break;
    
    case 4 :  result = a / b;
              cout << "Division of " << a << " and "  << b << " : " << result;
              break;
    
    case 5 :  result = a % b;
              cout << "Modulas of " << a << " and "  << b << " : " << result;
              break;
    
    default : cout << "Please Select the right option";
              break;
  }

  return 0;
}