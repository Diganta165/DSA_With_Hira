#include <iostream>
using namespace std;

int main(void){

    int recCol;

    cout << "Enter rectangle column: ";
    cin >> recCol;

    for(int i = 1; i <= recCol; i++){
        for(int j = 1; j <= recCol; j++){
            if(i == 1 || j ==1 || i == recCol || j == recCol){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout<< endl;
    }

    return 0;
}