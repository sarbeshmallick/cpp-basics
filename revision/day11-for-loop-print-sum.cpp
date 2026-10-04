// Problem statement- Take 5 inputs and print their sum using loops 



#include <iostream>
using namespace std;

int main() {

    int num;
    int sum = 0;


    cout << "Enter 5 numbers: ";
    
    for (int i = 1; i <= 5; i++) {
        cin >> num;
        sum = sum + num;
    }
  
    cout << "total sum is: " << sum;

    return 0;
}