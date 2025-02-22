#include <iostream>
using namespace std;

int main(){
    int arr[5] = {11,12,13,14,15};

    cout<< arr <<endl;
    cout<< &arr <<endl;

    cout<< arr[0] <<endl;
    cout<< *arr <<endl;

    cout<< arr[1] <<endl;   
    // this thing resolve like the below so all three are correct
    cout<< 1[arr] <<endl;
    cout<< *(arr+1) <<endl; 

    char ch[4] = {'a','b','c','d'};
    char* c = ch;

    cout<< c ;    
    // implementation for char of cout is different that's why it will print the whole string instead of just one address
    cout<< *c <<endl;
    cout << ch ;

    cout<<"Hello"<<endl;

    char a = 'a';
    char* ptr = &a;
    
    cout<<ptr; 
    // will print garbage value since there is no null character in a to stop printing the string 
    return 0;
}