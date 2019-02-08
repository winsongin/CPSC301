//Author: Winson Gin
//Created on 2/7/19
//CPSC 301 7-9:50PM 
/* This program will ask the user to input five integers and it will then store those five integers into an array. It will then proceed to print the original array and print the original array in reversed order. */
#include <iostream>

using namespace std;

void reverseArray(int array[]);

int main()
{
  int origArray[5];
  cout << "Welcome to the Reverse Array Program." << endl;
  cout << "Please enter 5 integers: " << endl;
  for(int i = 0; i < 5; i++){
    cin >> origArray[i];
  }
  reverseArray(origArray);
  return 0;
}

/* This function will be called from main and an array of size five will be passed in. It will print the original array and then print it in reverse. */
void reverseArray(int array[]){
  int revArray[5];
  cout << "Original Array: ";
  for(int i = 0; i < 5; i++){
    cout << array[i] << " ";
  }
  cout << endl;

  cout << "Reversed Array: ";
  for(int i = 4; i >= 0; i--){
    cout << array[i] << " ";
  }
  cout << endl;
}
