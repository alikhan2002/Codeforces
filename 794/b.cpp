#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    stack<int> st;
    int res = 0;
    for(int i = 0; i < n - 1 ; i++) {
        if(v[i] > v[i+1]) {
            res++;
            i++;
        }else continue;
    }
    if(res == n - 1) cout << n/2 << "\n";
    else cout << res << "\n";
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}