// Program to print a reverse array;

#include<iostream>
using namespace std;

void userInputArray(int arr[], int size){
  for(int i = 0; i  < size; i++) {
    cin >> arr[i];
  }
}

void reverseArray(int arr[], int size){
  int start = 0, end = size - 1;
  
  while(start < end){
    int temp;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
  }
}

void printArray(int arr[], int size){
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main(){
  int arr[] = {0};
  int size;

  cout << "Enter the size of array : - ";
  cin >> size;

  userInputArray(arr, size);
  cout << "Original Input array is : - ";
  printArray(arr, size);

  reverseArray(arr, size);
  
  cout << "\nReverse array is : - ";
  printArray(arr, size);
  
  return 0;
}