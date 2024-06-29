#include <iostream>
using namespace std;

int main(void){
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;

    cout << endl << "Enter number 2: ";
    cin >> num2;

    if(num1 < num2){
        cout << endl << num1 << " is the smaller number";
    }else{
        cout << endl << num2 << " is the smaller number";
    }
    return 0;
}