#include <iostream>
using namespace std;

// very important

void generatePowerSet(string str, int i = 0, string ans) {
    int n = str.length();

    if (i == n) {
        cout << ans << endl;
        return ;
    }
    generatePowerSet(str, i + 1, ans + str[i]);
    generatePowerSet(str, i + 1, ans);
}

int main(){
    string input = "asdf";
    generatePowerSet(input);
    return 0;
    
}