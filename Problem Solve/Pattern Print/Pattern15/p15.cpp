#include <iostream>
using namespace std;

int main(void){

    int colNum;

    cout << "Enter max column: ";
    cin >> colNum;

    for(int i = colNum; i > 0; i--){
        for(char j = 'A'; j < 'A' + i; j++){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}