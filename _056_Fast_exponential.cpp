#include <iostream>
using namespace std;

int fastExpo(int a, int b){
    int ans = 1;
    while(a>0){
        if(b&1){ // checking if odd using bit operator
            ans = ans * a;
        }
        a = a*a;
        b>>=1 ;  // dividing b by 2 using bit operator
    }
    return ans;
}

int main(){
    cout<<fastExpo(4,6);
    return 0;
}