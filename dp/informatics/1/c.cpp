#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> F(n + 1);
    F[0] = 1;
    F[1] = 1;
    for(int i = 2; i <= n; i++) {
        F[i] = F[i - 1] + F[i - 2];
        F[i] %= 10;
    }
    cout << F[n] << "\n";
}