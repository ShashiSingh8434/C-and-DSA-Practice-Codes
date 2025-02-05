#include <iostream>
#include <string>
using namespace std;

string findQuotient(int num, int divisor){
    int s = 1;
    int e = num;
    int mid;
    int value = num/divisor;

    while(s<=e){
        mid = s+(e-s)/2;
        if(mid == value){
            return "The quotient is: "+to_string(mid)+" and the remainder is: "+to_string(num-mid*divisor);
        }
        else if(mid<value){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return "Not Found";
}

int main(){
    cout<<findQuotient(125,11);
    return 0;
}