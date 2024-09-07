#include <iostream>
using namespace std;

int main(){
    // * * * * *
    // *       *
    // * * * * *

    int l = 5;
    int b = 4;
    for(int i=0 ; i<b ;i++){
        if(i==0 || i==b-1){
            for ( int j = 0; j < l; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        else{
            for ( int j = 0; j < l; j++){
                if(j==0 || j==l-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }

    // 1
    // 1 2 
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    int n = 5;

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= row; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    return 0;
}