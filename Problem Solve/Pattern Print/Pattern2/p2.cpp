#include <iostream>
using namespace std;

int main(void){
    int colNum;
    cout << "Enter column num: ";
    cin >> colNum;

    for(int i = 0; i < colNum; i++){
        for(int j = 0; j < i+1; j++){
            cout << "*";
            (j == i) && cout << "\n";
        }
    }



    return 0;
}