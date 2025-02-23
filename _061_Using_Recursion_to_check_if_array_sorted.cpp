#include <iostream>
using namespace std;

bool isSorted(int arr[], int size, int i){
    if(i>=size-1){
        return true;
    }

    if(arr[i]>arr[i+1]){
        return false;
    }
    
    return isSorted(arr,size,i+1);
    
}

int main(){
    int arr[6] = {1,1,1,1,1,1};
    int size = sizeof(arr)/sizeof(int);
    int i = 0;

    cout<<isSorted(arr,size,i);

    return 0;
}