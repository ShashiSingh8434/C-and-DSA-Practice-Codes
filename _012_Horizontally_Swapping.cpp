#include <iostream>
#include <string>
using namespace std;

string checkOddEven(int num){
    if(num % 2 == 0 ){
        return "even";
    }else{
        return "odd" ;
    }
}

int evenSwapping(int num){
    string n = to_string(num);
    string swapped = n;
    int index = (n.length())/2;

    for(int i=1 ; i <= (n.length())/2 ; i++){

        swapped[index-i] = n[index+i-1];
        swapped[index+i-1] = n[index-i];
    
    }

    num = stoi(swapped);
    return num;
}

int oddSwapping(int num){
    string n = to_string(num);
    string swapped = n;
    int index = (n.length())/2 ;

    for(int i=1 ; i <= (n.length())/2 ; i++){

        swapped[index-i] = n[index+i];
        swapped[index+i] = n[index-i];
        
    }

    num = stoi(swapped);
    return num;
}


int main(){
    int num;
    cout <<"Enter the number to swap: ";
    cin >> num ;
    int swap;

    if(num<0){
        int realNum = num;
        num = num+(-2*num);

        if (checkOddEven(num) == "even"){
            swap = evenSwapping(num);
        }
        else{
            swap = oddSwapping(num);
        }

        swap = swap - (2*swap);
    }
    else{
        if (checkOddEven(num) == "even"){
            swap = evenSwapping(num);
        }
        else{
            swap = oddSwapping(num);
        }
    }

    cout<<"Swapped : "<<swap<<endl;

    system("pause");

    return 0;
}