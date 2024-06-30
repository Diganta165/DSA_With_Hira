#include <iostream>
using namespace std;

int main(void){

    int colNum, count = 0;

    cout << "Enter max column: ";
    cin >> colNum;

    for(int i = 1; i <= colNum; i++){
        for(int j = 1; j <= i; j++){
            cout << ++count << " ";
            (j == i) && cout << endl;
        }
    }
    return 0;
}