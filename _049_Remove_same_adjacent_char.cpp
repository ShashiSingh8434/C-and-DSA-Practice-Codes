#include <iostream>
#include <string>
using namespace std;

// this removeAdjacent have some error but solve them
string removeAdjacent(string s){
    string str = s;
    int size = str.length();

    for (int i = 1; i < size-1;i++){
        if(str[i]==str[i-1]){
            str.erase(i-1,2);
            size = str.length();
            i-=2;
        }
        else if(str[i]==str[i+1]){
            str.erase(i,2);
            size = str.length();
            i--;
        }
    }
    return str;
}

string solution(string s){
    string ans = "";
    int i = 0;
    
    while(i<s.length()){
        if(ans.length()>0){
            if(ans[ans.length()-1] == s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        else{
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}

int main(){
    string str;
    cout<<"Enter: ";
    cin>>str;

    // string answer = solution(str);
    string answer = removeAdjacent(str);
    cout<<answer;

    return 0;
}