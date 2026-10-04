
// Function using return 

// Problem Statement- write a program that accepts numbers and print summation of 2 numbers and again take 2 number and print it 

// Dynamic user Input 




#include <iostream>
using namespace std;

int add(int a, int b) {

  return a + b;

}

int main() {

  int num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  int result = add(num1, num2);                            // cout << "The sum is: " << add(num1, num2) << endl;    - we can call the funtion inside cout also 

  cout << result << endl;
  cout << result * 10 << endl;
    
    return 0;
}

