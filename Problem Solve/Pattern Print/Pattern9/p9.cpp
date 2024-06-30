#include <iostream>
using namespace std;

void upperHalfStar(int col){
    for(int currentCol = 1; currentCol <= col; currentCol++){
        //  There is no need to run a loop for the first column after the first half
        if(currentCol != col){
            for(int spaceCount = 1; spaceCount <= (col - currentCol) ; spaceCount++ ){
                cout << " ";
            }
        }

        for(int starCount = 1; starCount <= (currentCol*2)-1; starCount++){
            cout << "*";
            (starCount == ((currentCol*2)-1)) && cout << "\n";
        }
    }
}

void lowerHalfStar(int col){
    for(int currentCol = 1; currentCol <= col; currentCol++){
        //  There is no need to run a loop for the first column
        if(currentCol -1 != 0){
            for(int currentSpace = 0 ; currentSpace < (currentCol -1); currentSpace++){
                cout << " ";
            }
        }

        for(int currentStar = 1; currentStar <= ((col - currentCol)*2)+1; currentStar++){
            cout << "*";
            (currentStar == ((col - currentCol)*2)+1) && cout << "\n";
        }

    }
}

int main(void){

    int colNum, halfCol;
    cout << "Enter column number: ";
    cin >> colNum;

    // ###############
    // Half of this star pattern is mirror to the other half
    // ###############

    halfCol = colNum/2;

    upperHalfStar(halfCol);
    lowerHalfStar(halfCol);
    

    return 0;
}