#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int> arr){
    int ans = -1;
    int s = 0;
    int e = arr.size()-1;
    int mid = (s+((e-s)/2));

    // my first try--------------

    // while(s<e){                                            
    //     if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
    //         ans = mid;
    //         return ans;
    //     }
    //     else if(arr[mid] < arr[mid+1]){
    //         s = mid+1;
    //     }
    //     else if(arr[mid]>arr[mid+1]){
    //         e = mid;
    //     }
    //     mid = (s+((e-s)/2));

    //     cout<<s<<" "<<e<<" "<<mid<<endl;
    // }
    // return ans;

    // SOLUTION: 
    
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = (s+((e-s)/2));
    }
    return s;
}
int main(){
    vector<int> arr{1,2,7,7,5,2,1};
    
    int index = peakElement(arr);

    cout<<"The peak of the array is: "<<index;

    return 0;
}