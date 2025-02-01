#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the no. to check whether it is prime or not: ";

    int num;
    cin>>num;

    bool prime = true;

    for(int i=num-1; i>1; i--){
        if(num%i==0){
            prime = false;
            break;
        }
    }

    if(prime){
        cout<< "Your given number is prime number.";
    }
    else{
        cout<< "Your given number is not a prime number.";
    }

    return 0;
}