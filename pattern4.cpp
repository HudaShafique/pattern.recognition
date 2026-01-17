/*
PYRAMID
   *
  ***
 *****
*******
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout <<"Enter size : ";
    cin >>n;

    for (int i = 1; i <= n; i++){
      for (int j = 1; j <= n-i; j++){
        cout <<" ";
      }
      /*
      arithmetic sequence logic (2i-1)
      when i = 1, k = 1
      i = 2, k = 3
      i = 4, k = 5

      i = n, k = 2n-1
      */ 
      for (int k = 1; k <= (2*i)-1; k++){
        cout <<"*";
      }
      cout <<endl;
    }
}