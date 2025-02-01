#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int num = 1;
    for (int i=0; i<n ; i++){
        for(int j=0; j<i+1; j++){
            if(j<i+1 && j!=0){
                cout<<"*";
            }
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    int start = num-n;
    for (int i=0; i<n ; i++){
        num = start;
        for(int j=0; j<n-i; j++){
            if(j<n-i && j!=0){
                cout<<"*";
            }
            cout<<num;
            num++;
        }
        cout<<endl;
        start -= n-i-1; 
    }

    return 0;
}

// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 11*12*13*14*15
// 11*12*13*14*15
// 7*8*9*10
// 4*5*6
// 2*3
// 1