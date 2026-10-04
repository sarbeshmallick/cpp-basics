

// Problem Statement- Take 5 numbers from us and print them and store it in an Array 




#include <iostream>
using namespace std;

int main() { 
  int num[5];

  cout << "Enter 5 numbers: ";                        // for(int i = 0; i < n; i++)
                    
  for(int i = 0; i < 5; i++) {               // i < 5   -> runs for 5 elements , do this instead of i <= 4
    cin >> num[i];
    cout << num[i] << "\n";

  }


    return 0;

  }
