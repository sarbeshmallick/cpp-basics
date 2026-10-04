

/*
// Given the marks of a student, tell us the grade he is getting following the below rules 
 Grade A- (>=90)
 grade B- (>=70 and <90)
 Grade C- (>=50 and <70)
 Grade D- (>=35 and < 50)
 Fail-     (< 35)
*/


#include <iostream>
using namespace std;

int main() {
  
  float marks;
  cout << "Enter your marks: " << "\n";
  cin >> marks;

  if (marks >= 90){
    cout << "Grade A";
  }

  else if (marks >= 70 and marks < 90){
    cout << "Grade B";
  }

  else if (marks >= 50 && marks < 70){
    cout << "Grade C";
  }

  else if (marks >= 35 and marks < 50){
      cout << "Grade D";
    }

    else {
      cout << "FAIL";
    }
    
return 0;

}
