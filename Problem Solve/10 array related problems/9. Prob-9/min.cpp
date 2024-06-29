#include <iostream>
using namespace std;

int main(void){
    int arr[4] = {12, 34, 5, 0};
    int min = arr[0];

    // find minimum number form this array
    for(int i = 0; i < 4; i++){
        if(arr[i] < min) min = arr[i];
    }

    cout << "Minimum number is: " << min;

    return 0;
}