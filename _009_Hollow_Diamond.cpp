#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int row = 1; row <= n; row++){
        for (int i = 0; i < n - row; i++){
            cout << " ";
        }
        cout << "*";
        if (row > 1){
            for (int midspace = 0; midspace < (2 * (row - 1)) - 1; midspace++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    for (int j = 0; j < n - 1; j++){
        for (int k = 0; k <= j; k++){
            cout << " ";
        }
        cout << "*";
        for (int l = 0; l < n - (2 * j); l++){
            cout << " ";
        }
        if (j != n - 2){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *