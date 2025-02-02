#include <iostream>
using namespace std;

int main(){
    int row=3, col=3, arr[row][col];
    cout<<"Enter the elements of the matrix:-"<<endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl<<endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}