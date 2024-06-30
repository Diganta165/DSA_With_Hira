#include <iostream>
using namespace std;

int main(void){
    
    int colNum;

    cout << "Enter max column: ";
    cin >> colNum;

    // Every character has asci value
    // If we do arithmetic operation between char & int the char will
    // do the operation on the asci value of the char 

    for(int i = 1; i <= colNum; i++){
        for(char j = 'A'; j < 'A' + i; j++){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}