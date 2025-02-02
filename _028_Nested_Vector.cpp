#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> arr , int row, int col){
    vector<vector<int>> trans(col , vector <int>(row,0));
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            trans[j][i] = arr[i][j];
        }
    }
    return trans;
}

int main(){
    int row=3, col=4;
    vector<vector<int>> arr(row , vector <int>(col,0));

    // arr = {{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

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
    cout<<endl<<endl;
    vector<vector<int>> result = transpose(arr, row, col);
    for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}