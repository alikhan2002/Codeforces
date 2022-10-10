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
    int s_x, s_y;
    int d;
    cin >> n >> m;
    cin >> s_x >> s_y;
    cin >> d;
    vector<vector<bool>> used(n+1, vector<bool> (m+1, false));

    bool ok = true;
    bool ok2= true;
    int i = s_x - d, j = s_y - d;
    if(i < 1) i = 1;
    if(j < 1) j = 1;
    int e = s_x + d, t = s_y + d;
    if(e > n) e = n;
    if(t > m) t = m;
    // cout << i << " "<< j <<' '<< e <<" "<< t <<"\n";
    for(; i <= e; i++) {
        // for(int k = s_y)
        used[i][s_y] = true;
    }
    for(; j <= t; j++) {
        used[s_x][j] = true;
    }
    i = 1, j = 1;
    while(j <= m - 1) {
        j++;
        if(used[i][j]) {
            ok = false;
            break;
        }
    }
    while(i <= n -1) {
        i++;
        if(used[i][j]){
            ok = false;
            break;
        }
    }
    i = 1, j =1;
    while(i < n) {
        i++;
        if(used[i][j]){
            ok2 = false;
            break;
        }
    }
    while(j < m) {
        j++;
        if(used[i][j]) {
            ok2 = false;
            break;
        }
    }
    if(ok or ok2) {
        cout << n + m - 2 <<"\n";
    }else cout <<"-1\n";

    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}