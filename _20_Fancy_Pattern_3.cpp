#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for (int i=0; i<n; i++){
        int num = 1;
        for (int j=0; j<(2*i)+1; j++){
            if(j==(i+1)){
                num -= 2;
            }

            if(j==0 || j==(2*i)){
                cout<<"* ";
            }
            else if(j<(i+1)){
                cout<<num<<" ";
                num++;
            }
            else{
                cout<<num<<" ";
                num--;
            }
        }
        cout<<endl;
    }
    for (int i=n-1; i>0; i--){
        int num = 1;
        for (int j=0; j<(2*i)-1; j++){
            if(j==i){
                num -= 2;
            }

            if(j==0 || j==(2*i)-2){
                cout<<"* ";
            }
            else if(j<i){
                cout<<num<<" ";
                num++;
            }
            else{
                cout<<num<<" ";
                num--;
            }
        }
        cout<<endl;
    }
    return 0;
}

// * 
// * 1 * 
// * 1 2 1 * 
// * 1 2 3 2 1 * 
// * 1 2 1 * 
// * 1 * 
// * 