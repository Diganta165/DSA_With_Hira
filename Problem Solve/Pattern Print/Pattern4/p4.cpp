#include <iostream>
using namespace std;

int main(void){
    int colNum;
    cout << "Enter column number: ";
    cin >> colNum;

    for(int i = 0; i < colNum; i++){
        for(int j = 0; j < i+1; j++){
            cout << i+1;
            (j+1 == i+1) && cout << "\n";
        }
    }
    return 0;
}