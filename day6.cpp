#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
   int t;
   cin >> t;
   string S;
   while(t--){
    cin >> S;
    int n = S.length();
    for(int i = 0;i<n;i+=2)
        cout<< S[i];
    cout << " ";
    for(int j = 1;j<n;j+=2)
        cout<< S[j];
    cout << "\n";
   }
    return 0;
}
