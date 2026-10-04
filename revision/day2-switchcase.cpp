
// Switch case - different format of writing if , when u know what can be possible if-else conditions 

// Given the day number, Print which day it is of week, assume week starts from Monday and ends on Sunday 

// we know that there are 7 days so we will apply switch case. The Switch will function according to the Day & u write all the cases possible


#include <iostream>
using namespace std;

int main() {

  int day;
  cout << "Enter the day: ";
  cin >> day;

  switch(day) {

    case 1:
    cout << "Monday";
    break;

    case 2:
    cout << "Tuesday";
    break;

    case 3:
    cout << "Wednesday";
    break;

    case 4:
    cout << "Thursday";
    break;

    case 5:
    cout << "Friday";
    break;

    case 6:
    cout << "weekend";
    break;

    case 7:
    cout << "weekend";
    break;

    default:
    cout<< "Invalid";

  }
    
    return 0;
}