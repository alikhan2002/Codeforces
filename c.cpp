#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    map<int, pair<int, int>> mp;
    for(int i = 0; i < n; i++) {
        int u;
        cin >> u;
        if(!mp.count(u)) {
            mp[u].first = i;
            mp[u].second = i;
        }else mp[u].second = i; 
    }
    for(int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        if(!mp.count(a) or !mp.count(b) or mp[a].first > mp[b].second) {
            cout << "NO\n";
        }else cout << "YES\n";
    }


}

int main() {
    int t; 
    cin >> t;
    while(t--)
        solve();
    
}