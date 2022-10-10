#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> F(2003);
    F[0] = 1;
    F[1] = 1;
    for(int i = 1; i <= n/2; i++) {
        F[2 * i] = F[i]  + 1;
        F[2*(i+1)] = F[i+1] + 1;
        F[2*i + 1] = F[2 * i + 2] + F[i];
        F[2 * i + 2] = F[2 * i + 1] - F[i];
    }
    cout << F[n] << "\n";
}