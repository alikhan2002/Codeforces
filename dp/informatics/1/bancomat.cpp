#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    const int INF = 1000000;
    int k; 
    cin >> k;
    vector<int> a(k), F(n + 1);
    for(int i = 0; i < k; i++) cin >> a[i];
    F[0] = 0;
    // F[n] = min(F[n-a[i1]], F[n-a[i2]],..., F[n - a[ik]]) + 1;
    for(int m = 1; m <= n; m++) {
        F[m] = INF;
        for(int i = 0; i <k;i++) {
            if(m >= a[i] and F[m - a[i]] + 1 < F[m]) {
                F[m] = F[m - a[i]] + 1;
                cout << F[m] << " "<< m << "\n";
            }
        }
    }
    if(F[n] == INF) cout <<"IMPOSSIBLE\n";
    else {
        while(n) {
            for(int i = 0;i < k; i++) {
                if(F[n - a[i]] == F[n] - 1) {
                    cout << a[i] << " ";
                    n-= a[i];
                }
            }
        }
    }
}