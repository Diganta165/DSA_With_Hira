#include <iostream>
#include <cmath>
using namespace std;


void upperHalfStar(int col){
    for(int currentCol = 1; currentCol <= col; currentCol++){
        for(int starCount = 1; starCount <= currentCol; starCount++){
            cout << "*";
            (starCount == currentCol) && cout << "\n";
        }
    }
}

void lowerHalfStar(int col){
    for(int currentCol = 1; currentCol <= col; currentCol++){
        for(int currentStar = currentCol; currentStar <= col; currentStar++){
            cout << "*";
            (currentStar == col) && cout << "\n";
        }

    }
}




int main(void){

    int colNum;
    cout << "Enter column Number: ";
    cin >> colNum;
    double halfCol = static_cast<double>(colNum) / 2;

    // ceiling halfCol to get the closest to half of the colNum integer number 

    upperHalfStar(ceil(halfCol));
    lowerHalfStar((colNum - ceil(halfCol)));

    return 0;
}