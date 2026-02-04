#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int d, m, y, dueD, dueM, dueY;
    cin >> d >> m >> y; 
    cin >> dueD >> dueM >> dueY;
    int fine = 0;
    if(dueY == y){ // same year
        if(dueM == m){ // same month
            if(dueD < d)
                fine = 15 * (d - dueD);
        }else if(dueM < m){ // after the expected month
            fine = 500 * (m - dueM);
        }
    }
    else if(dueY < y){ // returned after the year
        fine = 10000;
    } 
    cout << fine;
    return 0;
}
