

// Given an age,
// if the age >= 18, print "Adult"
// if the age < 18 and >= 10, print "Teen"
// if the age < 10, print "Child"



#include <iostream>
using namespace std;

int main() {

  int age;

  cout << "beta enter your age: ";
  cin >> age;


  if(age >= 18) {
    cout << "Adult";
  }

  else if(age < 18 && age >= 10) {
    cout << "Teen";
  }

  else if (age < 10) {
    cout << "Child";
  }
    
    return 0;
}