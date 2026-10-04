

// Probelem Statement- Store 2 strings and print it and show its length and also find the index of 3rd element 


#include <iostream>
using namespace std;

int main() {

  string firstname = "Sarbesh"; 
  string lastname = "Mallick";

  string fullname = firstname + " " + lastname;

  cout << "My fullname is: " << fullname << endl;

  cout << fullname.length() << endl;

  cout << fullname[3];
  
    
    return 0;
}





/*

### if we have to find length-

vairable name.lenth()  
Eg:- cout << fullName.length();

Length counts every character including spaces 
For, Sarbesh Mallick:-
S a r b e s h     -> 7
(space)           -> 1
M a l l i c k     -> 7
Total:- 7 + 1 + 7 = 15

So, fullName.length() returns 15 

fullName.length()  is same as fullName.size()   and for string it does the same thing.


### Revise:-

For, Sarbesh Mallick
Length -> 15
Last Index -> 14               (Last Index = Length - 1)




*/