/*
Problem statement- 
Create an array of 5 integers.
Ask the user to enter numbers.
Store each number in the correct index.
Immediately print the number that was entered.
*/




#include <iostream>
using namespace std;

int main() {

    int num[5];

    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++) {
      cin >> num[i];
      cout << num[i] << endl;
    }


    return 0;
}


/*
Input-> 10 20 30 40 50 

Output-
10
20
30 
40
50 
*/