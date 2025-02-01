#include <iostream>
#include <cmath>
using namespace std;

// this program is not running properly on vs code try it on online compilers

void decimalToBinaryMethod1(int num){
    int bit =0;
    int binaryNum =0;
    int i = 0;
    while(num>0){
        bit = num%2;
        binaryNum = bit*pow(10,i) + binaryNum;
        num /= 2;
        i++;
    }
    cout << binaryNum << endl;
}

void decimalToBinaryMethod2(int num){
    int bit =0;
    int binaryNum =0;
    int i = 0;
    while(num>0){
        bit = (num & 1);
        binaryNum = bit*pow(10,i) + binaryNum;
        num = num>>1;
        i++;
    }
    cout << binaryNum << endl ;
}

int main(){
    int n = 23;
    // decimalToBinaryMethod1(n);
    decimalToBinaryMethod2(n);
    return 0;
}