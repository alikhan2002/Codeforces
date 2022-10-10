#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), dif(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int maxi = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) {
            cout << "NO\n";
            return;
        }
        maxi = max(maxi, a[i] - b[i]);
    }
    for(int i = 0; i < n; i++) {
        int e = max(a[i] - maxi, 0);
        if(e == b[i]) 
            continue;
        cout << "NO\n";
        return;
        
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}