#include <iostream>
using namespace std;

void sq(int& a){ // pass by reference
    a = a*a;
}

void pointer(int*& ptr){ // passing pointer as a reference
    *ptr = *ptr +1;
}

int main(){
    int a = 15;
    int& b = a;

    cout<< a << endl;
    cout<< b << endl;
    a++;
    cout<< a << endl;
    cout<< b << endl;

    sq(a);

    cout<<a<<endl;
    cout<<b<<endl;

    int x = 11;
    int* asdf = &x;

    cout<<x <<endl;
    pointer(asdf);
    cout<<x <<endl;

    return 0;
}