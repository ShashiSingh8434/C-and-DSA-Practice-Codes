#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i = 0; i<(2*n)-1; i++){
        if(i<n){
            for(int j = 0; j < i+1; j++){
                cout<<"* ";
            }
        }
        else{
            for(int k = 0; k < (n*2)-i-1; k++){
                cout<<"* ";
            }
        }
        cout<<endl;     
    }
    return 0;
}

// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 