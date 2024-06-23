// #include <iostream>
// using namespace std;

// bool checkRange(int lastNum){
//     if(lastNum < 1 || lastNum > 1000 ){
//         cout << "Invalid Range";
//         return false;
//     }else{ return true;};
// }

// int summation(int lastNum, bool isEven = true){
//     int sum = 0;

//     for(int i = 1; i <=lastNum; i++){
//         if(isEven && (i%2 == 0)){
//             sum += i;
//         }else if(!isEven && (i%2 != 0)){
//             sum+= i;
//         }
//     }
//     return sum;
// } 

// void showOutput(bool isEven, int lastNum){
//     cout<< !isEven ? "OddSum" : "EvenSum";
//     cout << "Input: " << lastNum << endl;
//     // cout << "Output: " << summation(lastNum, false);
//     cout << "Output: " << !isEven? summation(lastNum, false) : summation(lastNum, true);
// }

// int main(void){
//     int lastNum;
//     // while(true){
//         cout << "Enter the range:";
//         cin >> lastNum;

//         if(!checkRange(lastNum)) return 0;
//         showOutput(false, lastNum);
//         showOutput(true, lastNum);
        
//     // }

    




//     return 0;
// }


#include <iostream>
using namespace std;

bool checkRange(int lastNum){
    if(lastNum < 1 || lastNum > 1000 ){
        cout << "Invalid Range";
        return false;
    }else{ return true;};
}

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


int main(void){
    int lastNum;
    cout << "Enter the range:";
    cin >> lastNum;

    if(!checkRange(lastNum)) return 0;

    cout << "OddSum"<< endl;
    cout << "Input: " << lastNum << endl;
    cout << "Output: " << summation(lastNum, false) << endl << endl;

    cout << "EvenSum"<< endl;
    cout << "Input: " << lastNum << endl;
    cout << "Output: " << summation(lastNum, true);

    return 0;
}