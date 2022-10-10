#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int res = 0;
    for(int i = 0; i < n;i++) {
        cin >> a[i];
        res += a[i];
    }
    if(res < m) {
        cout << "0\n";
        return;
    }else cout << res - m << "\n";
    



}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
}