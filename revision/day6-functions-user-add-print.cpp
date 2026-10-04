// Problem Statement- write a program that accepts numbers and print summation of 2 numbers and again take 2 number and print it 

// user dynamic input 


#include <iostream>
using namespace std;

void twonosprint() {

  int num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  cout << "Sum of two numbers is: " << num1 + num2 << endl;

}

int main() {

  twonosprint();
    
    return 0;
}