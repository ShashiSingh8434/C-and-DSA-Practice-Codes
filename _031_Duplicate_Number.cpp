#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,7,8};

    while(arr[0] != arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
    cout<<arr[0];

    return 0;
}