#include <bits/stdc++.h>
using namespace std;

class BadString : public exception {
public:
    const char* what() const noexcept override {
        return "Bad String";
    }
};

int main() {
    string S;
    getline(cin, S);

   try {
    int n = stoi(S);
    cout << n;
    }
    catch (const exception&) {
        cout << "Bad String";
    }

    return 0;
}
