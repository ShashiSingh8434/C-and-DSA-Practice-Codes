#include <iostream>
#include <string>
using namespace std;

string findQuotient(int num, int divisor){
    bool marking = false;
    bool quotMark = false;
    bool remMark = false;
    if(num<0 && divisor<0){
        num = num*(-1);
        divisor = divisor*(-1);
    }
    else if(num<0){
        marking = true;
        quotMark = true;
        num = num*(-1);

    }
    else if(divisor<0){
        marking = true;
        remMark = true;
        divisor = divisor*(-1);
    }

    int s = 1;
    int e = num;
    int mid;
    int value = num/divisor;

    while(s<=e){
        mid = s+(e-s)/2;
        if(mid == value){
            int remainder = num-mid*divisor;
            if(marking){
                mid = mid*(-1);
            }
            if(quotMark){
                remainder = remainder*(-1);
            }
            return "The quotient is: "+to_string(mid)+" and the remainder is: "+to_string(remainder);
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
    cout<<findQuotient(-5,2);
    return 0;
}