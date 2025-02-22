#include <iostream>
#include <vector>
using namespace std;

int countPrime(int n){
    if(n == 0) return 0;

    vector<int> primes(n, true);
    primes[0] = false;
    primes[1] = false;
    int count = 0;

    for (int i = 2; i < n; i++){
        if(primes[i]){
            count++;
        }

        int j = 2*i;
        while(j<n){
            primes[j] = false;
            j += i;
        }
    }
    return count;
}

int main(){
    int n = 20;

    cout<< countPrime(n);

    return 0;
}