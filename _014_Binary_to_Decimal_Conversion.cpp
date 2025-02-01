#include <iostream>
#include <cmath>

using namespace std;

void decimalToBinary(int n){
    int bit = 0;
    int decimal = 0;
    int i = 0;
    while(n>0){
        bit = n%10;
        decimal += bit*pow(2,i++);
        n /= 10;
    }
    cout << decimal;
}

int main(){
    decimalToBinary(10111);
    return 0;
}