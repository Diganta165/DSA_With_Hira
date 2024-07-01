#include <iostream>
using namespace std;

int main(void){

    int colNum;

    cout << "Enter max column: ";
    cin >> colNum; 

    for(int colCnt = 1; colCnt  <= colNum; colCnt++ ){
        // space calculation => max column - current column
        for(int spcCnt = 1; spcCnt <= colNum - colCnt; spcCnt++){
            cout << " ";
        } 

        char rowChar = 'A' + (colCnt -1);

        for(int rowCnt = 1; rowCnt <= (colCnt * 2) -1; rowCnt++){
            char rowChar = 'A';

            if(rowCnt <= colCnt){
                // First half of the row contains the current row number of alphabets
                cout << (rowChar = rowChar + (rowCnt-1));
            }else{
                // In the 2nd half of the row I need to decrease the current output by one alphabet sequentially.
                // But I can get the required value by => (current Column * 2) - Current Row + 1
                // Since I started from the character 'A' I need to add 1 more to decrease the number  
                cout << (rowChar = rowChar + ((colCnt * 2)- (rowCnt+1)));
            }
        }
        cout << endl;
    }

    return 0;
}