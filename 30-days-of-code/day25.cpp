#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string isPrime(int n){
    if(n <= 1) return "Not prime";
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return "Not prime";
    }
    return "Prime";
}

int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << isPrime(n) << "\n";
    }  
    return 0;
}
