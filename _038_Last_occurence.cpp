#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> arr, int target){
    int ans = -1;

    int s = 0;
    int e = arr.size()-1;
    int mid = (s+((e-s)/2));

    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]<target){
            s = mid+1;
        }
        else if(arr[mid]>target){
            e = mid-1;
        }
        mid = (s+((e-s)/2));
    }

    return ans;
}
int main(){
    vector<int> arr{1,2,2,2,2,2,2,3,3,3,3,3,4,5,6,7,8,9};
    
    int target = 3;
    int index = lastOccur(arr, target);

    cout<<"The index of the target is: "<<index;

    return 0;
}