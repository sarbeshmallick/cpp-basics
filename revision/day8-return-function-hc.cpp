

// Function using return 

// Problem Statement- write a program that accepts numbers and print summation of 2 numbers and their multiplication 

// Hardcoded values 



#include <iostream>
using namespace std;


int add(int a, int b) {
  return a + b;
}



int main() {

  int num1 = 10;
  int num2 = 20;

  int result = add(num1, num2);                 // int result = add(10, 20);       // cout << "The sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << endl;

  cout << result << endl;                          // cout << "The sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << endl;

  cout << result * 20;
    
    return 0;
}