/*

*
**
***
****
*****

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int size;
    cout <<"Enter size : "<<endl;
    cin >>size;

    for (int row = 1; row <= size; row++){
        for (int stars = 1; stars <= row; stars++){
            cout <<"*";
        }
        cout <<endl;
    }

    return 0;
}