#include <iostream>
using namespace std;

int main(){
    cout << "Enter the number of rows for pyramid: ";
    int rows; 
    cin >> rows; 

    int n = rows;
    // int n = (rows*2)-1;

    int spacecount = n;

    int starcount = 1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=spacecount; j++){
            cout << " " ;
        }
        for (int k=1; k<=starcount; k++){
            cout << "* " ;
        }
        cout << endl;
        starcount++;
        spacecount--;
    }
    return 0;
}