#include <iostream>
#include <string>
using namespace std;

// to get the i and j from the element 

    // int rowIndex = mid/col;
    // int colIndex = mid%col;

    // while to get the element index using i and j : val = c*i+j <--- check this i am not confirm

string findIndex(int row, int col, int arr[][4], int target){
    int s = 0;
    int e = row*col - 1;
    int mid;

    while(s<=e){
        mid = s+(e-s)/2;
        int rowIndex = mid/col;
        int colIndex = mid%col;

        if(arr[rowIndex][colIndex] == target){
            return "The row index is: " + to_string(rowIndex) + " and the column index is: "+to_string(colIndex);
        }
        else if(arr[rowIndex][colIndex] < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return "Not Found";
}

int main(){
    int row = 3;
    int col = 4;

    int arr[3][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12}
                    };

    string res = findIndex(row,col,arr,8);
    cout<<res;
    return 0;
}