#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i=0; i<n; i++){
        int row = i+1;
        //printing space
        for(int k=0; k<n-i-1; k++){
            cout<<"  ";
        }

        //printing number
        for(int k=0; k<i+1; k++){
            cout<< row <<" "; 
            row++;
        }
        row--;

        //printing reversed 
        //         1
        //        232
        //       34543
        // 
        // 
        // 
        for(int k=0; k<i; k++){
            row--;
            cout<< row << " " ; 
        }
        cout<< endl;
    }

    return 0;
}