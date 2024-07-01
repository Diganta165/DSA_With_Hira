#include <iostream>
#include <cmath>
using namespace std;


void lowerHalf(double colNum){
    double lowerColNum = colNum / 2;
    
    for(int halfR1 = 1; halfR1 <= lowerColNum; halfR1++){
        //  first half row
        int starCnt = 0;
        for(int j = halfR1; j <= lowerColNum; j++){
            cout<< "*";
            starCnt++;
        }

        //  space
        for(int s = 1; s<= (ceil(lowerColNum) * 2 ) - (starCnt * 2); s++){
            cout << " ";
        }

        for(int halfR2 = halfR1; halfR2 <= lowerColNum; halfR2++){
            cout<< "*";
        }

        cout << endl;
    }
}


void upperHalf(double colNum){
    double halfCol = colNum / 2;

    for(int currentCol = 1; currentCol <= ceil(halfCol); currentCol++){
        // Row's first half operation
        for(int halfR1 = 1; halfR1<= currentCol; halfR1++){
            cout << "*";
        }

        // Row's space
        for(int spaceCnt = 1 ; spaceCnt <= ((ceil(halfCol)) - currentCol)*2; spaceCnt++){
            cout << " ";
        }

        //  Row's second half operation
        for(int halfR2 = 1; halfR2 <= currentCol; halfR2++){
            cout << "*";
        }
        cout << endl;
    }
}


int main(void){
    
    int colNum;

    cout << "Enter max column: ";
    cin >> colNum;

    upperHalf(colNum);
    lowerHalf(colNum);

    return 0;
}