#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n ;i++) cin >> a[i];
    for(int i = 0; i < n ;i++) cin >> b[i];

    vector<int> d;
    queue<int> q;
    d.push_back(b[0] - a[0]);
    for(int i = 1; i < n  ;i++) {
        if(a[i - 1] < a[i] and a[i] < b[i - 1]){
            d.push_back(b[i] - b[i-1]);
            continue;
        }
        d.push_back(b[i] - a[i]);
        
    }
    if(d.size() != n) {
        d.push_back(b[n-1] - a[n-1]);
    }
    for(int i = 0; i < n ;i++) 
        cout << d[i] << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}