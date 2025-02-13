#include <iostream>
using namespace std;

int main(){

    int a;
    cout<< "Enter the value of a: ";
    if(cin>>a){
        cout<<"You entered a integer therefore it runs."<<endl;
    }

    int n;
    cout<< "Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=10 ; i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}