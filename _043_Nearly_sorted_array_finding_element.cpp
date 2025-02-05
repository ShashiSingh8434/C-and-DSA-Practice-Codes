#include <iostream>
using namespace std;

int findElementIndex(int arr[], int size, int target){
    int s=0;
    int e=size-1;
    int mid = s +(e-s)/2;

    while(s<=e){
        if(arr[mid]==target)
            return mid;
        
        else if(mid>0 && arr[mid-1]==target)
            return mid-1;
        
        else if(mid<size-1 && arr[mid+1]==target)
            return mid+1;
        
        
        if(target>arr[mid]){
            s = mid+2;
        }
        else if(target<arr[mid]){
            e = mid-2;
        }
        mid = s +(e-s)/2;
        // cout<<s<<e<<endl;
        
    } 
    return -1;
}

int main(){
    int arr[]={1,3,2,4,5,7,8,9,11,10};
    int size = (sizeof(arr)/sizeof(int));

    cout<<findElementIndex(arr,size,11);

    return 0;
}