#include <iostream>
#include <string>
using namespace std;

bool checkPallindrome(string s, int i, int j){
    while(i<=j){
        if(s[i] != s[j]){
            return false; 
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

bool validPallindrome(string s){
    int i=0, j=s.length()-1;

    while(i<=j){
        if(s[i] != s[j]){
            return checkPallindrome(s,i,j-1) || checkPallindrome(s,i+1,j);
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter: ";
    cin>>str;

    cout<< (validPallindrome(str));

    return 0;
}