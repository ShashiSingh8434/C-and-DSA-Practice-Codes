#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int maxNum(vector<int>& arr, int target){
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MIN;
    }
    
    int maximum = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        int ans = maxNum(arr,target-arr[i]);
        if(ans!=INT_MIN){
            maximum = max(maximum, ans+1);
        }
    }

    return maximum;
}

int main(){
    vector<int> arr = {5,2,2};
    int target = 7;
    
    cout<<maxNum(arr, target);
    return 0;
}