#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) cin >> v[i][j];
    int rx = -1, ry = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j< m; j++) {
            if(v[i][j] =='E') continue;
            if(rx == -1) {
                rx = i;
                ry = j;
            }
            if(i < rx || j < ry) {
                cout << "NO\n";
                return;
            }
        }
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