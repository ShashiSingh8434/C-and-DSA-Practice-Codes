#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n = 5;

    int carry = 0;
    vector<int> res ;
    res.push_back(1);

    for(int i=2; i<=n; i++){
        for(int j=0; j<res.size(); j++){
            int lol = res[j]*i + carry;
            res[j] = lol%10;
            carry = lol/10;
        }
        if(carry){
            res.push_back(carry);
        }
        carry = 0;
    }
    reverse(res.begin(), res.end());

    for(auto i : res){
        cout<<i;
    }

    return 0;
}