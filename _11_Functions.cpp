#include <iostream>
using namespace std;

int sum(int a , int b){
    cout << "The sum is : ";
    return a+b;
}

int main(){
    int a = 10;
    int b = 15;

    cout << sum(a ,b);

    return 0;
}