#include <iostream>
#include <numeric>

using namespace std;

bool isPossibleSolution(int arr[], int student, int size, int sol){
    int pageSum = 0;
    int c = 1;
    for (int i = 0; i < size; i++){
        if(arr[i]>sol){
            return false;
        }

        if(pageSum + arr[i] > sol){
            c++;
            pageSum = 0;
            pageSum = arr[i];
            if(c>student){
                return false;
            }
        }
        else{
            pageSum += arr[i];
        }
    }
    return true;   
}

int minPages(int arr[], int student, int size){
    if(student > size){
        return -1;
    }

    int start = 0;
    int end = accumulate(arr, arr+size, 0);
    int ans = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(isPossibleSolution(arr, student, size, mid)){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[4] = {12,34,67,90};
    int student = 4;
    int size = sizeof(arr)/sizeof(int);

    cout<<"Min no of pages that can be assigned to one student is: "<<minPages(arr, student,size);
    return 0;
}