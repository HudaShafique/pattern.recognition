#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int size;
    cout <<"Enter size : "<<endl;
    cin >>size;

    for (int i = 0; i < size; i++){
        for (int j = 0; j <= i; j++){
            cout <<"*";
        }
        cout <<endl;
    }

}