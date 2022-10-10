#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    cin >> m;
    vector<int> b(m + 1);
    for(int i = 0; i < m; i++) cin >> b[i];
    int last = 0;
    for(int i = 0; i < m; i++) {
        last += (b[i]);
        last = last%(n);
    }
    cout << a[last + 1]<<"\n";

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}