


// Parameterized function using returning functions 

#include <iostream>
using namespace std;

int add(int a, int b) {
  return a + b;
}


int main() {

  int x = add(3, 4);
  int y = add(x, 10);

  cout << x << "\n" << y;
    
    return 0;
}

