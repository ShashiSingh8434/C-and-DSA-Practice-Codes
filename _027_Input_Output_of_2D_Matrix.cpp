#include <iostream>
using namespace std;

int main(){
    // See the initialisation carefully 😉
    int row=3, col=3, arr[row][col];

    cout<<"Enter the elements of the matrix:-"<<endl;

    // Taking the input 
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl<<endl;

    // Printing the matrix 
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}