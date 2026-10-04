


// Prblm stat- Write a parameterized function that returns the sum of two integers. Call the function multiple times with different values, store each returned value in separate variables, and print the results.


#include <iostream>
using namespace std;

int add(int a, int b) {
  return a + b;
}

int main() {

int x = add(3,4);
int y = add(x,10);
int z = add(y,x);
int s = add(add(x,y),10);

cout << x << endl << y << endl << z << endl << s;

}

