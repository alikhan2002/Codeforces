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
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int> (n));
    rep(i, n) {
        rep(j, n) {
            cin >> v[i][j];
        }
    }
}
11101   11111
10100   10101
11111   11101   
10110   11100   
11111   10101


int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}