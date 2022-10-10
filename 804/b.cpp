#include <bits/stdc++.h>

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int> (m));
    for(int i = 0; i < n; i += 2) 
        v[i][0] = 1;
    
    for(int i = 0; i < m; i += 2) 
        v[0][i] = 1;
    
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(!v[i][j - 1] and !v[i - 1][j]){
                if(i + 1 < n and j + 1 < m) {
                    v[i][j] = 0;
                    v[i + 1][j] = 1;
                    v[i][j + 1] = 1; 
                }else v[i][j] = 0;
            }
            else if(v[i][j - 1] and v[i - 1][j]){
                 if(i + 1 < n and j + 1 < m) {
                    v[i][j] = 0;
                    v[i + 1][j] = 1;
                    v[i][j + 1] = 1; 
                }else v[i][j] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << '\n';
    }
    // 1 0 0 0 0 1
    // 0 1 0 0 1 0
    // 1 0 1 1 0 0
    // 0 0 1 1 0 0 
    // 1 1 0 0 1 0 
    // 0 0 0 0 0 1
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}