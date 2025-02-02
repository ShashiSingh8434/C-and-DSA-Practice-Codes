#include <iostream> 
#include <vector>
using namespace std;

int main(){
    vector<int> arr {1,2,1,2,0,1,2,0,2,1,1,0};
    
    int lowIndex = 0, mid = 0;
    int highIndex = arr.size() - 1;

    while (mid <= highIndex) {
        if (arr[mid] == 0) {
            swap(arr[mid], arr[lowIndex]);
            lowIndex++;
            mid++;
        } 
        else if (arr[mid] == 1) {
            mid++;
        } 
        else {
            swap(arr[mid], arr[highIndex]);
            highIndex--;
        }
    }

    for (int num : arr){
        cout << num << " ";
    }
    
    return 0;
}