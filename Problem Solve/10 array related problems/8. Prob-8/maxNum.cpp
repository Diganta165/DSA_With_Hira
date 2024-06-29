#include <iostream>
using namespace std;

int main(void){
    int arr[4] = {12, 34, 5, 0};
    int max = arr[0];
    // find max number form this array
    for(int i = 0; i < 4; i++){
        if(arr[i] > max) max = arr[i];
    }

    cout << "Max number is: " << max;

    return 0;
}