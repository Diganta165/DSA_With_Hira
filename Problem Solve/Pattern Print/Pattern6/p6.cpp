#include <iostream>
using namespace std;


int main(void){
    int colNum;
    int count = 0;
    cout << "Enter column number: ";
    cin >> colNum;

    for(int i = 0; i < colNum; i++){
        for(int j = i; j < colNum; j++){
            cout << ++count;
            (j+1 == colNum) && cout << "\n";
        }
        count = 0;
    }
    return 0;
}