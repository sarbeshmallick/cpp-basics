

// now same as day3-revision or string-tuf-modified,  let the user type its full name and then print it and then print length of its first name
// getline kumar 


#include <iostream>
using namespace std;

int main() {

  string firstname, lastname, fullname;

  cout << "Write your firstname: ";     // at this stage we will print an empty string as firstname is not initiliazed- cout << "Write your firstname: " <<firstname;
  getline(cin, firstname);              // we can add Sarbesh Kumar in firstname only and then Mallick in lastname 

  cout << "Write your last name: ";
  cin >> lastname;

  fullname = firstname + " " + lastname;

  cout << "My fullname is: " << fullname << endl;


  cout << "Lenght of the first name is: " << firstname.length() << endl;
  cout << "Lenght of the fullname is: " << fullname.length();


    
    return 0;
}






/*

old code mistakes-

string firstname, lastname, fullname;
cout << "My fullname is: " << firstname + " " + lastname;   ❌

if we have initilaized fullname as string we can directly write 
fullname = firstname + " " + lastname
and then,
cout << fullname;            ✔      instead of ❌  cout << "my fullname is: " << firstname + " " + lastname;



*/



/*

old code mistake- 

string firstname, lastname, fullname;
cout << "Write your firstname: " << firstname;


no point in writing firstname in  -  cout << "Write your firstname: " << firstname;
as firtsname is not yet initialized as we havent given cin yet 
so better we write- 
cout << "Write your firstname: ";
cin >> firstname;

firstname is currently an empty string because no user input has been taken yet



*/


/*

instead of complexity we can simplify it 
and lets say the firstname is Sarbesh Kumar 

we will directly ask fullname:
and then   getline(cin, fullname);




*/