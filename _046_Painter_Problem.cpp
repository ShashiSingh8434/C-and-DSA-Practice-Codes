#include <iostream>
using namespace std;

bool isPossibleSolution(int arr[], int n, int k, long long mid){
    long long timeSum = 0;
    int c = 1;
    for (int i = 0; i < n; i++){
        if(arr[i]>mid){
            return false;
        }
        if(arr[i]+timeSum>mid){
            c++;
            timeSum = arr[i];
            if(c>k) return false;
        }
    }
    return true;
}

long long minTime(int arr[], int n, int k){
    long long start = 0;
    long long end = 0;
    for (int i = 0; i < n; i++){
        end += arr[i];
    }
    long long ans = -1;
    while(start <= end){
        long long mid = start + (end-start)/2;
        if(isPossibleSolution(arr,n,k,mid)){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid+1;
        }
        return ans;
    }

    
}
int main(){ 
    int arr[4] = {10,20,30,40};
    int size =  sizeof(arr)/sizeof(int);
    int person = 2;

    long long mintime = minTime(arr, size, person);
    cout<<"The mintime for a single person is: "<<mintime;
    return 0;
}