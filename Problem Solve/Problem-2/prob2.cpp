#include <iostream>
using namespace std;

// check input
bool checkRange(int lastNum){
    if(lastNum < 1 || lastNum > 1000 ){
        cout << "Invalid Range";
        return false;
    }else{ return true;};
}

// sum of even and odd
int summation(int lastNum, bool isEven = true){
    int sum = 0;

    for(int i = 1; i <=lastNum; i++){
        if(isEven && (i%2 == 0)){
            sum += i;
        }else if(!isEven && (i%2 != 0)){
            sum+= i;
        }
    }
    return sum;
} 

// show output
void showResult(bool isEven, int lastNum){
    cout << (!isEven?
                "OddSum" 
                : "EvenSum" 
            ) << endl;
    cout << "Input: " << lastNum << endl;
    cout << "Output: " << summation(lastNum, isEven) << endl << endl;
}

int main(void){
    int lastNum;
    while(true){

        cout << "Enter the range:";
        cin >> lastNum;

        if(!checkRange(lastNum)) return 0;

        // show result for odd & even respectively
        showResult(false, lastNum);
        showResult(true, lastNum);
    }

    return 0;
}