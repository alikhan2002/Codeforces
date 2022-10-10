#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n;i++) cin >> a[i];
    for(int i = 0; i< n ;i++) cin >> b[i];
    vector<pair<int,int>> v, cop, res;
    for(int i = 0; i< n ;i++) {
        v.push_back({a[i], b[i]});
    }
    cop = v;
    sort(v.begin(), v.end());
    for(int i = 0; i< n ;i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[j] == v[i].first and b[j] == v[i].second) {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
                res.push_back({j+1, i+1});
            }
        }
    }
    bool ok = true;
    for(int i = 1; i < n; i++) {
        if(v[i].first < v[i-1].first or v[i].second < v[i-1].second) ok = false;    
    }
    if(ok and res.size() <= 10000) {
        cout << res.size() << "\n";
        for(int i = 0; i < res.size(); i++)
            cout << res[i].first << " " << res[i].second << "\n";
    }else cout << "-1\n";
    


}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}