// program to find length of a string...

#include <iostream>
using namespace std;

int getLength(char arr[]) {
  int count = 0;
  for (int i = 0; arr[i] != '\0'; i++) {
    count++;
  }
  return count;
}

int main() {
  char name[] = "";  // or string name;
  cout << "Enter the string : ";
  cin >> name;

  cout << "Your name is : " << name << endl;
  cout << "Length of string: " << getLength(name) << endl;

  return 0;
}