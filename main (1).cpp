#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int P, N, R, dayCount = 0;
    
    cin >> P >> N >> R;

    int total = N;
    
    while (total <= P) {

        dayCount += 1;
        N = N * R;
        total += N;
    
    }

    if (total > P) {

        cout << dayCount;
        
    }
    
    return 0;
    
}