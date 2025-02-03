#include <iostream>
#include <functional>
#include <unordered_map>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,5,3}; 
    int n = sizeof(arr)/sizeof(int);

    // method 1-----------------------------------
    // without using unordered map library 

    // int max = INT32_MIN;

    // for(int a : arr){
    //     if(max<a){
    //         max = a;
    //     }
    // }

    // int hash[max+1] = {0};
    // for(int i=0; i<n; i++){
    //     hash[arr[i]]++;
    // }

    // for (int i = 0; i < n; i++){
    //     if(hash[arr[i]] > 1){
    //         cout<<i+1<<" ";
    //         break;
    //     }
    // }

    // method 2 -----------------------------------
    // using unordered map library 

    unordered_map<int, int> hash;

    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++){
        if(hash[arr[i]] > 1){
            cout << i+1 << " ";
            break;
        }
    }
    

    return 0;
}