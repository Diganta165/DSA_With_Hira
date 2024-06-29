#include <iostream>
using namespace std;

int main(void){
    int lastNum;
    cout << "Enter last number :";
    cin >> lastNum;
    

    int sum = 0;
    for(int i = 0; i <= lastNum; i++) sum+= i;

    cout << endl << "Sum: " << sum;

    return 0;
}