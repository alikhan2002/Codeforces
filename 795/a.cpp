#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, odd = 0, even=0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n;i++) {
        cin >> v[i];
        if(v[i] & 1) odd++;
        else even++;
    }
    cout << min(even, odd) << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}