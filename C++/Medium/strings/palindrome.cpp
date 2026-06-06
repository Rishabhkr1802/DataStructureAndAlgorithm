// Program to find the given string is palindrome or not...

#include <iostream>
using namespace std;

bool palindrome(char arr[], int size) {
  int start = 0;
  int end   = size - 1;

  while (start < end) {
    if (arr[start] != arr[end]) {
      return false;
    } else {
      start++;
      end--;
    }
  }
  return true;
}

int getLength(char arr[]) {
  int count = 0;
  for (int i = 0; arr[i] != '\0'; i++) {
    count++;
  }
  return count;
}

int main() {
  char name[100];

  cout << "Enter the string: ";
  cin >> name;

  int length = getLength(name);

  cout << "Your string is: " << name << endl;
  cout << "Length of string: " << length << endl;

  bool isPalindrome = palindrome(name, length);

  if (isPalindrome) {
    cout << "Palindrome" << endl;
  } else {
    cout << "Not Palindrome" << endl;
  }
}