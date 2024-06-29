// Find sum of all element in one array i.e [1,3,4,5,5,6,7] is given array, please now find sum of 1+2+3+4.... N

#include <iostream>
using namespace std;

int calculateSum(int arrNum[], int arrSize){
    int sum = 0;
    for(int i = 0; i < arrSize; i++){
        sum += arrNum[i];
    }
    return sum;
}

int main(void){
    int arrSize;
    cout << "Enter array size: ";
    cin >> arrSize;

    int arrNum[arrSize];
    cout << "Enter array elements" << endl;
    for(int i = 0; i < arrSize; i++){
        cin >> arrNum[i];
    }

    cout << "Sum of the array elements: " << calculateSum(arrNum, arrSize);

    return 0;
}