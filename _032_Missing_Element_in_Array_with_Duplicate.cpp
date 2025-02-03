#include <iostream>
using namespace std;

void markingMethod(int *arr, int n){
    for(int i=0; i<n; i++){
        int index = abs(arr[i]);
        if(arr[index-1]>0){
            arr[index-1] *= (-1);
        }
    }

    cout<<"The missing element is: ";
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
    }

}

void  sortSwapping(int *arr, int n){
    int i = 0;
    while(i<n){
        if(arr[i] != arr[arr[i]-1]){
            swap(arr[i], arr[arr[i]-1]);
        }
        else{
            i++;
        }
    }
    
    cout<<"The missing element is: ";
    
    for(int i=0; i<n; i++){
        if(arr[i] != i+1)
            cout<<i+1<<" ";
    }
}

int main(){
    int arr1[] = {2,2,4,4,7,7,9,9,9};
    int arr2[] = {2,2,4,4,7,7,9,9,9};

    int n = sizeof(arr1)/sizeof(int);

    markingMethod(arr1, n);
    cout<<endl;
    sortSwapping(arr2, n);

    return 0;
}