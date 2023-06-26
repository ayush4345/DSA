#include <iostream>
using namespace std;

bool isSorted(int arr[], int n){

    if (n == 0 || n ==1){
        return true;
    }

    if (arr[0] > arr[1]){
        return false;
    }else {
        bool remainingPart = isSorted(arr+1, n-1);
        return remainingPart;
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};
    int n = 5;

    bool ans = isSorted(arr,n);

    if (ans) {
        printf("sorted");
    }

    return 0;
}