#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s; 
    cin >> s;
    vector<int> p(n + 1);

    for(int i = 1; i <= n; i++) {
        p[i] = p[i - 1] + int(s[i - 1] == 'W');
    }
    for(int i = 1; i <= n; i++) {
        cout << p[i] << " \n"[i == n];
    }

    int res = INT_MAX;
    for(int i = k; i <= n; i++) {
        res = min(res, p[i] - p[i - k]);
    }
    cout << res << "\n";
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}