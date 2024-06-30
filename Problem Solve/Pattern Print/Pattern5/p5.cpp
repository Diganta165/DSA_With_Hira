#include <iostream>
using namespace std;

int main(void){
    int colNum;
    cout << "Enter column number: ";
    cin >> colNum;

    for(int i = 0; i < colNum; i++){
        for(int j = i; j < colNum; j++){
            cout << "*";
            (j+1 == colNum) && cout << "\n";
        }
    }
    return 0;
}