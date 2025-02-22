#include <iostream>
using namespace std;

int hcf(int a,int b){
    if(a == 0 || b == 0){
        return 0;
    }
    
    while(a>0 && b>0){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a==0 ? b : a;
}

int lcm(int a,int b){
    if(a == 0 || b == 0){
        return 0;
    }

    int h = hcf(a,b);
    return (a*b)/h;
}

int main(){
    int a = 45;
    int b = 10;

    cout << lcm(a,b);

    return 0;
}