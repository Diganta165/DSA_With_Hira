#include <iostream>
using namespace std;

int main(void){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << endl <<"Enter second number: ";
    cin >> num2;

    // Swap numbers
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << endl << "After swapping" << endl;
    cout << "first number is " << num1 << endl;
    cout << "second number is " << num2;

    return 0;
}