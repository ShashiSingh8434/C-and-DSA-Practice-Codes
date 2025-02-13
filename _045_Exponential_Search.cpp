#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target){
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int exponentialSearch(int arr[], int target, int size){
    if(arr[0] == target){
        return 0;
    }
    int i = 1;
    while(i<size && arr[i]<=target){
        i = i*2;

    }
    return binarySearch(arr, i/2, min(i,size-1), target);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int target = 10;
    int size = sizeof(arr)/sizeof(int);

    int result = exponentialSearch(arr,target,size);
    cout<<result;

    return 0;
}