

/* 
Practising void function

Before print function call      - main 
I am a print function     - print 
After print function call   - main 
*/



#include <iostream>
using namespace std;

void print() {
  cout << "I am a print function" <<endl;
}

int main() {

  cout << "Before print function call" << endl;

  print();

  cout << "After print function call" << endl;
    
    return 0;
}

