#include <iostream>
using namespace std;

int main(void){

    int maxCol;
    cout << "Enter max column:  ";
    cin >> maxCol;

    // ######################
    // every column has {(macCol - currentCol)*2} + 1 numbers of star
    // every column has one less space than the column number
    // ######################

    for(int currentCol = 1; currentCol <= maxCol; currentCol++){
        //  There is no need to run a loop for the first column
        if(currentCol -1 != 0){
            for(int currentSpace = 0 ; currentSpace < (currentCol -1); currentSpace++){
                cout << " ";
            }
        }

        for(int currentStar = 1; currentStar <= ((maxCol - currentCol)*2)+1; currentStar++){
            cout << "*";
            (currentStar == ((maxCol - currentCol)*2)+1) && cout << "\n";
        }

    }

    return 0;
}