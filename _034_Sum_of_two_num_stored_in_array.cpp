#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> num1 = {1,2,3,4};
    vector<int> num2 = {3,2,2};

    string res;

    int i = num1.size()-1;
    int j = num2.size()-1;
    int carry = 0;

    while(i>=0 && j>=0){
        int sum = num1[i] + num2[j] + carry;
        int digit = sum % 10;
        carry = sum/10;

        res.push_back(digit + '0');
        i--;
        j--;
    }

    while(i>=0){
        int sum = num1[i] + carry;
        int digit = sum % 10;
        carry = sum/10;

        res.push_back(digit + '0');
        i--;
    }

    while(j>=0){
        int sum = num2[j] + carry;
        int digit = sum % 10;
        carry = sum/10;

        res.push_back(digit + '0');
        j--;
    }

    if(carry){
        res.push_back(carry+'0');
    }

    while(res[res.size()-1] == 0){
        res.pop_back();
    }

    reverse(res.begin(), res.end());

    for(auto i : res){
        cout<<i;
    }

    return 0;
}