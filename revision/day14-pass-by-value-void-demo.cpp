
// prblm stat- Write a void function that accepts an integer by value, changes its value inside the function, and demonstrate that the original variable in main() remains unchanged.


#include <iostream>
using namespace std;


void change(int x) {

    cout << "Inside before: " << x << endl;
    x = x + 50;
    cout << "Inside after : " << x << endl;  
}


int main() {

    int num = 10;
    cout << "Before function: " << num << endl;
    change(num);
    cout << "After function: " << num << endl;

    return 0;
}





/*

Before function 10 
Inside before 10 
Inside after 100
After function 10 


Before function 10 
Inside before 10 
Inside after 60 
After function 10 


*/