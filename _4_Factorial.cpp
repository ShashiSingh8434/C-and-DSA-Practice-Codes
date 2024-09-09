#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the no. to find the factorial: ";
    int num;
    int result = 1;
    cin>>num;
    for(int i=num; i>=1; i--){
        result = result*i;
    }
    cout << "The factorial of the "<<num << " is : ";
    cout << result;
    return 0;
}