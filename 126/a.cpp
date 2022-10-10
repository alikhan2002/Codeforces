#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(2*n);
    for(int i = 0; i < 2*n;i++)  cin >> a[i];
    long long res = 0;

    for(int i = 0; i < n - 1;i++) 
        if(abs(a[i] - a[i+1]) + abs(a[n + i] - a[n+1 + i]) > abs(a[i] - a[n + 1 + i]) + abs(a[n + i] - a[i+1])) swap(a[i+1], a[n+ i+1]);
    
    // for(int i = 0; i < 2 * n; i++) cout << a[i] << " ";
    for(int i = 0; i < n - 1; i++) res += abs(a[i] - a[i + 1]);

    for(int i = n; i < 2 * n - 1; i++) res += abs(a[i] - a[i+1]);
    cout << res << "\n";
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}