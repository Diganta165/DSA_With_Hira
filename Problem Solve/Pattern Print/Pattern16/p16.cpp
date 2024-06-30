#include <iostream>
using namespace std;

int main(void){

    int colNum;

    cout << "Enter max column: ";
    cin >> colNum;

    for(int i = 0; i < colNum; i++){
        // Since we need to print same value again and again in every row
        // we need a char variable to hold the char value
        // and we can increment the char value by adding i
        
        char  rowChar = 'A' + i;

        for(int j = 1; j <= i+1; j++){
            cout << rowChar;
        }
        cout << endl;
    }

    return 0;
}