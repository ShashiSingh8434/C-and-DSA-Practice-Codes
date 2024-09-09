#include <iostream>
using namespace std;

int main(){
    cout << "Enter the number of rows for pyramid: ";
    int rows; 
    cin >> rows; 

    int n = (rows*2)-1;

    int spacecount = n/2;
    int starcount = 1;
    for (int i=1; i<=(n/2)+1; i++){
        for (int j=1; j<=spacecount; j++){
            cout << "  " ;
        }
        for (int k=1; k<=starcount; k++){
            cout << " *" ;
        }
        cout << endl;
        starcount = starcount+2;
        spacecount--;
    }
    return 0;
}