#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the elements: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    int ans = a^b^c;
    cout<<"The value of xor of three elements is: "<<ans;

    return 0;
}

/*
Truth Table for XOR:
0 - for same element
1 - for different element 
*/