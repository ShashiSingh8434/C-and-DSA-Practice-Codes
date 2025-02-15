#include <iostream>
#include <string>
using namespace std;

void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

int main(){
    char arr[50];

    cout<<"Enter the name: ";
    cin.getline(arr,50);

    int size = 0;

    for(int i=0;i<50;i++){
        if(arr[i] != '\0'){
            size++;
        }
        else{
            break;
        }
    }

    cout<<"Size of char array: "<<size<<endl;

    for (int i = 0; i < size/2; i++){
        swap(arr[i],arr[size-1-i]);
    }
    
    cout<<"Reversed char array: "<<arr;
    
    return 0;
}