#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the number: ";

    int num;
    cin>>num;

    cout << "The prime numbers till the given numbers are: " << endl;

    for(int i=2; i<=num; i++){

        bool prime = true;

        for(int j=i-1; j>1; j--){

            if(i%j==0){
                prime = false;
                break;
            }

        }  

        if(prime){
            cout<< i << endl;
        }  

    }
    return 0;
}