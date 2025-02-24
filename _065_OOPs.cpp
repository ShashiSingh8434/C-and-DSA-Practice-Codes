#include <iostream>
using namespace std;

class Animal{
    int a; // <-- default specifier is private

    public:

    int x;
    int y;

    Animal(){
        cout<<"constructor"<<endl;
    }

    Animal(int x,int y){
        this->x = x;
        this->y = y;
    }

    int getP(){
        return p;
    }

    void setP(int m){
        this->p = m;
    }

    private:

    int p;
    
};

int main(){
    Animal animalStack(1,2);;  // make a object in stack

    Animal* animalHeap = new Animal(4,5);  // make a object in heap and the animalHeap is a pointer so to access the methods use (*animalHeap)  or (animalHeap->x) ... etc

    cout<<animalStack.x<<" ";
    cout<<animalStack.y<<" ";

    animalStack.setP(3);
    cout<<animalStack.getP()<<" ";

    cout<< animalHeap -> x <<" ";
    cout<< animalHeap -> y <<" ";

    animalHeap -> setP(6);
    cout<< animalHeap -> getP() <<" ";

    return 0;
}