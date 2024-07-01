#include <iostream>
using namespace std;

int main(void){

    int colNum;

    cout << "Enter max column: ";
    cin >> colNum; 

    //  First character would be First alphabet + one less than the colNum
    char firstChar = 'A' + (colNum-1);

    for(int curCol = 1; curCol <= colNum; curCol++){
        // We need to start form the => first character - (current Column number -1)
        // which is equal to the ASCI value of our desired first character of each row

        for(char curRow = firstChar-( curCol - 1); curRow <= firstChar; curRow++ ){
            cout << curRow;
        }
        cout << endl;
    }

    return 0;
}