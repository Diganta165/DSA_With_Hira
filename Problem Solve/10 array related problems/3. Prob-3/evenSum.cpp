#include <iostream>
using namespace std;

// even array elements sum
int evenSum(int arrNum[], int arrSize){
    int sum = 0;
    for(int i = 0; i < arrSize; i++){
        if(arrNum[i] % 2 == 0) sum += arrNum[i];
    }
    return sum;
}


// array elements input function
void inputArrElm(int arrNum[], int arrSize){
    cout << "Enter array elements" << endl;
    for(int i = 0; i < arrSize; i++){
        cin >> arrNum[i];
    }
}

int main(void){

    int arrSize;
    cout << "Enter array size: ";
    cin >> arrSize;

    int arrNum[arrSize];

    // input array elements
    inputArrElm(arrNum, arrSize);

    // sum of even array elements
    cout << "Sum of even array elements: " << evenSum(arrNum, arrSize);


    
    return 0;
}