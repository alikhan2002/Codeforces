#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> F(n + 1);
    // F[0] = 0;
    F[1] = 1;
    F[2] = 2;
    F[3] = 4;
    for(int i = 4; i <= n; i++) {
        F[i] = F[i - 1] + F[i - 2] + F[i - 3];
    }
    cout << F[n] << "\n";
}