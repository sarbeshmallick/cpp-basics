

// Store 2 strings and print it and show its length and also find the index of 3rd element


#include <iostream>
using namespace std;

int main() {

  string firstname, lastname, fullname; 

  cout << "enter your firstname: ";
  getline (cin, firstname);

  cout << "enter your lastname: ";
  getline (cin, lastname);                       


  fullname = firstname + " " + lastname;

  cout << "your fullname is: " << fullname << endl;

  cout << "length of fullname is: " << fullname.length() << endl;

  cout << "length of firstname is: " << firstname.length() << endl;

  cout << "index of 3rd element: " << fullname[3];

    
    return 0;
}




/*

Alternative- 
if we want to use fullname.length() multiple times 

cout << "length of fullname is: " << fullname.length() << endl;
you could store it if you were going to use it multiple times:

int length = fullname.length();
cout << "Length = " << length;

Not necessary here, but useful in bigger programs.

*/

