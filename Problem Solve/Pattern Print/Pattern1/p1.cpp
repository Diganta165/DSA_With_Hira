#include <iostream>
using namespace std;

int main(void){

    for(int i = 0; i < 5 ; i++){
        for(int j = 0; j < 5; j++){
            cout << "*";
            // if(j==4) cout << "\n";
            (j==4) && cout << "\n";
        }
    }

    return 0;
}