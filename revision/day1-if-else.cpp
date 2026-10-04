



// Given an age, print adult >= 18, or print "Teen"


#include <iostream>
using namespace std;

int main() {

  float age;

  cout << "beta enter your age: ";
  cin >> age;

  if(age >= 18) {
    cout << "Adult";
  }

  else {
    cout << "Teen";
  }

    
    return 0;
}