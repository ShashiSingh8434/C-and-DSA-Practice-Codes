#include <iostream>
using namespace std;

void sq(int& a){
    a = a*a;
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
    cout<<b<<endl  ;

    return 0;
}