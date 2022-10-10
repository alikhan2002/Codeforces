#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<pair<int, ll>> ans;
    for(int i = 0; i < n; i++) cin >> a[i];

    int k;
    cin >> k;
    vector<int> b(k);
    for(int i = 0; i < k; i++) cin >> b[i];

    for(int x: a) {
        ll i = 1;
        while(x %m ) {
            x /= m;
            i *= m;
        }
    }

}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}