

/*

Problem statement-
You are given three integers a, b and c
print which of these integers are largest 
if two or more integers are equal and are the largest, print any of them
the program should indicate that as well , user will input the 3 integers at runtime

*/


#include <iostream>
using namespace std;

int main() {

  int a, b, c;
  cout << "Enter your 3 numbers: ";
  cin >> a >> b >> c;


  if (a >= b) {

    if(a >= c){

      if (a == b || a == c) {
        cout << "largest number is: " << a << " & There's a tie" << endl;
      }

      else {
        cout << "largest number is: " << a << endl;
      }
    }

      else {
        cout << "largest number is: " << c << endl;
      }

  }


  else if ( b >= c) {
      
    if ( b == c) {
      cout << "largest number is: " << b << " & There's a tie" << endl;
    }

    else {
      cout << "largest number is: " << b << endl;
    }

  }


  else {
    cout << "largest number is: " << c << endl;
  }

  return 0;


  }




