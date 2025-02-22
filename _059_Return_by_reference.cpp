#include <iostream>
using namespace std;

int* asdf(int*& a){  // here we are returning the value as reference to a address just know that it can be done and is very useful_
    a += 1;
    return a;
}

void lol(int* a){
    asdf(a);
    cout<<*a;
}

int main(){
    int a[5] = {1,2,3,4,5};
    lol(a);

    return 0;
}