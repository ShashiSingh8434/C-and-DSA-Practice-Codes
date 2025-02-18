#include <iostream>
using namespace std;

string removeSubstring(string str, string part){
    int index = str.find(part);

    while(index != string::npos){
        str.erase(index,part.length());
        index = str.find(part);  
    }

    return str;
}

int main(){
    string str;
    string part;
    cout<<"Enter str: ";
    cin>>str;
    cout<<"Enter part: ";
    cin>>part;

    string answer = removeSubstring(str,part);
    cout<<answer;

    return 0;
}