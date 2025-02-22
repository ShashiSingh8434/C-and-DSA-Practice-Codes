#include <iostream>
using namespace std;

void printNumReverse(int n){
    if(n==0) return;

    cout<< n << " ";
    printNumReverse(n-1);
}

void printNum(int n){
    if(n==0) return;

    printNum(n-1);
    cout<< n << " ";
}

/* 
Here in below code just by putting the cout below the func make the printing order in forward because of the recursive nature like


void printNum(int n){
    if(n==0) return;

    printNum(n-1);=> 
                        void printNum(int n){
                            if(n==0) return;

                            printNum(n-1); =>
                                                void printNum(int n){
                                                    if(n==0) return;

                                                    printNum(n-1);
                                                                    -----   and so on 
                                                    cout<< n << " "; ---> 8
                                                }

                            cout<< n << " ";    ---> 9
                        }
    cout<< n << " ";     ---> 10
}

that's why on putting the cout below makes the order in forward while in previous func the order is in reverse

*/

int main(){
    printNumReverse(10);
    cout<<endl;
    printNum(10);
    return 0;
}