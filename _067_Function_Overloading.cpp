#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:
    void name(){
        cout << "hello " << endl;
    }
    void name(string a){
        cout << "hello " << a << endl;
    }
    void name(string a, string b){
        cout << "hello " << a << " " << b << endl;
    }
};

int main(){
    Employee emp;

    emp.name();
    emp.name("shashi");
    emp.name("shashi","vineeta");
    
    return 0;
}