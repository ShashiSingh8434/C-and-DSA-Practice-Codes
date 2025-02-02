#include <iostream>
#include <vector>
using namespace std;

// Dutch National Flag Algorithm

int main(){
    vector<int> arr = {1,2,3,-1,-2,5,-8,-4,5,88,-99};

    int i=0, lowIndex=0, highIndex=arr.size()-1;
    
    while(lowIndex <= highIndex){
        if(arr[lowIndex] < 0){
            lowIndex++;
        }
        else if(arr[highIndex] > 0){
            highIndex--;
        }
        else{
            swap(arr[lowIndex],arr[highIndex]);
        }
    }

    for(int n : arr){
        cout<<n<<" ";
    }


    // int index=0, putIndex=0;            <--- crude method my first try 
    //                                          (but do above one because that is good)
    // int endIndex = arr.size();

    // while(index<endIndex){
    //     if(arr[index] < 0){
    //         swap(arr[index], arr[putIndex]);
    //         putIndex++;
    //     }
    //     index++;
    // }
    // for(int n : arr){
    //     cout<<n<<" ";
    // }
    return 0;
}