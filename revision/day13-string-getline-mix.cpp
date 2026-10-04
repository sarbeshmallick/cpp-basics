
// Problem stat- ask input of age and name from user and output it 


#include <iostream>
using namespace std;

int main() {

  int age;
  string name;

  cout << "whats you age munna: ";
  cin >> age;

  cin.ignore();

  cout << "whats your name dickhead: ";
  getline(cin, name);

  cout << "your age is: " << age << endl;
  cout << "your name is: " << name;
    
    return 0;
}