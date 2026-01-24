#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin >> n;
    map<string, string> phoneBook;
    while(n--){
        string key, value;
        cin >> key >> value;
        phoneBook.insert(make_pair(key, value));
    }
    string search_key;
    while(cin >> search_key){
        auto it = phoneBook.find(search_key);
        if (it != phoneBook.end()) {
            cout << search_key << "=" << it->second << endl;
    } else {
       cout << "Not found" << endl;
    }
    }
    return 0;
}
