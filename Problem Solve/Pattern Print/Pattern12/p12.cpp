#include <iostream>
using namespace std;

int main(void){

    int colNum, count = 0;

    cout << "Enter max column: ";
    cin >> colNum;

    // ###############
    // We need to mirror rows
    // in every half row => half Row Elements == currentCol  
    // 
    // space in every half row => Max Column - currentCol
    // 
    // we need to a counter to increment first half of our row elements and then decrement in the other half 
    // ###############

    for(int currentCol = 1; currentCol <= colNum; currentCol++){
        // Row's first half operation
        for(int halfR1 = 1; halfR1<= currentCol; halfR1++){
            cout << (count+=1);
        }

        // Row's space
        for(int spaceCnt = 1 ; spaceCnt <= (colNum - currentCol)*2; spaceCnt++){
            cout << " ";
        }

        //  Row's second half operation
        for(int halfR2 = 1; halfR2 <= currentCol; halfR2++){
            cout << (count--);
            (halfR2==currentCol) && cout <<"\n";
        }

        count = 0;
    }

    return 0;
}