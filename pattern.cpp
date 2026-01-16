#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int size;
    cout <<"Enter size : "<<endl;
    cin >>size;

    for (int i = 1; i <= size; i++){
        for (int j = 1; j <= i; j++){
            cout <<"*";
        }
        cout <<endl;
    }

}