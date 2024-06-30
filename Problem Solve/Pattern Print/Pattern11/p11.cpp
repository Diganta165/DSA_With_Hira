#include <iostream>
using namespace std;



void outputHandler(bool isEven, int i){

    // ##################
    //  for odd column => odd j will output 1
    //  for odd column => even j will output 0
    //  for even column => odd j will output 0
    //  for even column => even j will output 1
    // ##################
    
    for(int j = 1; j <= i; j++){
        (j % 2 == 0 && isEven) && cout << "1";
        (j % 2 != 0 && isEven) && cout << "0";
        (j % 2 == 0 && !isEven) && cout << "0";
        (j % 2 != 0 && !isEven) && cout << "1";

        (j == i) && cout << "\n";
    }
}

int main(void){

    int colNum;

    cout << "Enter max column: ";
    cin >> colNum;

    // ##################
    // for odd columns row starts with odd number
    // for even columns row starts with even number
    // ##################

    for(int i = 1; i <= colNum; i++){
        if(i % 2 == 0){
            outputHandler(true, i);
        }else if(i % 2 != 0){
            outputHandler(false, i);
        }
    }

    return 0;
}