#include <iostream>
using namespace std;

int main(){ 
    int a = 5;
    int* ptr= &a;

    cout<<a<<endl;

    cout<<ptr<<endl;
    cout<<&a<<endl;

    cout<<&ptr<<endl; // accessing the address from the pointer
    cout<<*ptr<<endl; // accessing value from the pointer 

    cout<<sizeof(int*)<<endl ;
    cout<<sizeof(char*)<<endl ;
    cout<<sizeof(double*)<<endl ;
    cout<<sizeof(bool*)<<endl ;

    // Null pointer

    int* nullPtr = 0;
    
    return 0;
}