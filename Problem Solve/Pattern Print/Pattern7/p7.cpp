#include <iostream>
using namespace std;

int main(void){

    int maxCol;

    cout << "Enter the column num: ";
    cin >> maxCol;

    // ################
    // Every column has {(currentCol * 2) -1} number of stars
    // Every column has (maxCol - currentCol) number of space
    // ################
    
    for(int currentCol = 1; currentCol <= maxCol; currentCol++){
        for(int spaceCount = 1; spaceCount <= (maxCol - currentCol) ; spaceCount++ ){
            cout << " ";
        }

        for(int starCount = 1; starCount <= (currentCol*2)-1; starCount++){
            cout << "*";
            (starCount == ((currentCol*2)-1)) && cout << "\n";
        }
    }

    return 0;
}