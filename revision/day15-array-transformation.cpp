
// Convert  5 10 15 20  to  25 100 225 400



#include <iostream>
using namespace std;

void transformArray(int arr[], int size) {

  for (int i = 0; i < size; i++)  {

    arr[i] = arr[i] * arr[i];
  }
}


int main() {

  int arr[] = {5, 10, 15, 20};
  int size = 4;

  transformArray(arr, size);

  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

    return 0;
}