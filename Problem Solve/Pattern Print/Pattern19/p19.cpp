#include <iostream>
using namespace std;

void lowerHalf(int colNum){
    for(int currentCol = 1; currentCol <= colNum/2; currentCol++){
        // Row's first half operation
        for(int halfR1 = 1; halfR1<= currentCol; halfR1++){
            cout << "*";
        }

        // Row's space
        for(int spaceCnt = 1 ; spaceCnt <= ((colNum/2) - currentCol)*2; spaceCnt++){
            cout << " ";
        }

        //  Row's second half operation
        for(int halfR2 = 1; halfR2 <= currentCol; halfR2++){
            cout << "*";
        }
        cout << endl;
    }
}


void handleUpperHalfSpace(int starCnt, int colNum){

    // space  => max column number - (number of half star of a row * 2)
    for(int i = 1; i<= colNum - (starCnt *2); i++){
        cout << " ";
    }
}

// half row of upper half
void rowHalf(int colNum, int i, bool isSpace = false){
    for(int j = i; j <= colNum/2; j++){
        cout<< "*";
    }

    // space 
    if(isSpace) handleUpperHalfSpace(((colNum/2)- (i-1)), colNum);
}

void upperHalf1(int colNum){
    for(int i = 1; i <= colNum/2; i++){
        rowHalf(colNum, i, true);
        rowHalf(colNum, i);
        cout << endl;
    }

}

int main(void){
    int colNum;

    cout << "Enter max column: ";
    cin >> colNum; 

    upperHalf1(colNum);
    lowerHalf(colNum);

    return 0;
}