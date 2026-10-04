



// prblm stat- Write a parameterized function that accepts two integers and returns their sum. Call the function from main() and print the returned value.



#include <iostream>
using namespace std;


int sum(int a, int b) {
  return a + b;
}

int main() {

  int res = sum(4,5) + 10;            // + 10 is not required as per prblm statement but just for concept =, it shows functions can be nested inside expressions 
  cout << res << endl;

  return 0;

}





/*

Time complexity- 
return a + b;  takes constant time 
time complexity-  O(1)

*/