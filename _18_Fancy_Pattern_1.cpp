#include <iostream>
#include "assert.h"

using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    assert(n<=9);    
    // If our code has some pre condition for which only they will 
    // run then we can set the condition like this as for the value of n must 
    // be less than 9 only 

    for(int i = 0; i < n; i++){
        int print_count = i+1;
        int index_to_print = 8-i;
        for(int j = 0; j < 17; j++){
            if(index_to_print == j && print_count > 0){
                cout<<i+1<<" ";
                index_to_print += 2;
                print_count--;
            }else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}

// condition for this program is no.of rows possible is 9 and column is 17

// Enter the value of n: 5
// * * * * * * * * 1 * * * * * * * * 
// * * * * * * * 2 * 2 * * * * * * * 
// * * * * * * 3 * 3 * 3 * * * * * * 
// * * * * * 4 * 4 * 4 * 4 * * * * * 
// * * * * 5 * 5 * 5 * 5 * 5 * * * * 

// Enter the value of n: 9
// * * * * * * * * 1 * * * * * * * * 
// * * * * * * * 2 * 2 * * * * * * * 
// * * * * * * 3 * 3 * 3 * * * * * * 
// * * * * * 4 * 4 * 4 * 4 * * * * * 
// * * * * 5 * 5 * 5 * 5 * 5 * * * * 
// * * * 6 * 6 * 6 * 6 * 6 * 6 * * *
// * * 7 * 7 * 7 * 7 * 7 * 7 * 7 * *
// * 8 * 8 * 8 * 8 * 8 * 8 * 8 * 8 *
// 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 