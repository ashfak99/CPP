#include <bits/stdc++.h>

using namespace std;

int powerSumHelper(int x, int n, int current) {
    long long val = 1;
    for (int i = 0; i < n; i++) { 
        val *= current;
    }

    if (val > x) return 0;
    if (val == x) return 1;

    return powerSumHelper(x - val, n, current + 1) + powerSumHelper(x, n, current + 1);
}

int powerSum(int X, int N) {
    return powerSumHelper(X, N, 1);
}

int main() {
    int X, N;
    
    cout << "Enter X (Target Sum): ";
    cin >> X;
    
    cout << "Enter N (Power): ";
    cin >> N;

    int result = powerSum(X, N);
    cout << "Result: " << result << endl;

    return 0;
}