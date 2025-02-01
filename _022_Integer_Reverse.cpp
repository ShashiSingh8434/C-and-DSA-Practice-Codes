#include <iostream>
using namespace std;

int reverseInt(int n){
    int ans = 0;
    bool isNeg = false;

    if(n<0){
        isNeg = true;
        n = -n;
    }

    if(n <= INT32_MIN){
        return 0;
    }

    while(n>0){
        if(ans > INT32_MAX / 10){
            return 0;
        }
        int rem  = n%10;
        ans = ans*10 + rem;
        n /= 10;
    }    
    return isNeg ? -ans : ans;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<reverseInt(n);
    return 0;
}