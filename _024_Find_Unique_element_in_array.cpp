#include <iostream>
#include <vector>
using namespace std;

/*
The question statement was such that only one element is used for one time in an array. So find that therefore the array is like that;

here i have used the xor operator ^ which give output as

same element - 0
different element - 1

*/

int findUnique(vector<int> vec){
    int ans = 0;
    for (int i = 0; i < vec.size(); i++){
        ans = ans ^ vec[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    vector<int> vec(n);

    cout<<"Enter the elements of an array:-"<<endl;
    for (int i = 0; i < vec.size(); i++){
        cin>>vec[i];
    }
    
    cout<<"The unique element of the array is: "<<findUnique(vec);

    return 0;
}