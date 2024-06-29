#include <iostream>
using namespace std;

// search array element
bool findArrElem(int arrNum[], int arrSize, int searchNum ){
    for(int i = 0; i < arrSize; i++){
        if (arrNum[i] == searchNum) return true;
    }
    return false;
} 

// array elements input function
void inputArrElm(int arrNum[], int arrSize){
    cout << "Enter array elements" << endl;
    for(int i = 0; i < arrSize; i++){
        cin >> arrNum[i];
    }
}
int main(void){
    int searchNum;
    int arrSize;
    cout << "Enter array size: ";
    cin >> arrSize;

    // dynamically allocating array elements
    int* arrNum = new int[arrSize];

    // input array elements
    inputArrElm(arrNum, arrSize);
    cout << "arrNum" << arrNum;
    
    // find element in array
    cout << "Search a number: " << endl;
    cin >> searchNum;

    if(findArrElem(arrNum, arrSize,  searchNum)){
        cout << searchNum << " is in the array";
    }else{
        cout << searchNum << " is not in the array";
    }

    // clearing dynamically allocated memory
    delete[] arrNum;

    return 0;
}