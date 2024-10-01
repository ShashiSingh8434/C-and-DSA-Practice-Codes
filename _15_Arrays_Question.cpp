#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};

    for(int i=0; i<(sizeof(arr)/4)/2; i++){
        cout<<arr[i]<<endl;
        cout<<arr[(sizeof(arr)/4)-i-1]<<endl;
    }
    if((sizeof(arr)/4)%2 != 0){
        cout<<arr[((sizeof(arr)/4)/2)];
    }
    return 0;
}