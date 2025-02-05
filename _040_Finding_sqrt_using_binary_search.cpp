#include <iostream>
using namespace std;

// in this i am finding only the integer part of the square root

int findSqrt(int n){
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(mid*mid == n){
            return mid;
        }

        if(mid*mid < n){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    cout<<findSqrt(n);

    return 0;
}