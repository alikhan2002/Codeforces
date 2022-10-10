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
#define speed() ios_base::sync_with_stdio(false);cin.tie(0)

using namespace std;

const int N = 2e5 + 5;
const int K = 30;
vector<vector<int>> dp(K, vector<int>(N + 1));
void solve() {
    int l, r;
    cin >> l >> r;
    int ans = r - l + 1;
    for(int i = 0; i < K; i++) {
            ans = min(ans, dp[i][r + 1] - dp[i][l]);
    }
    cout << ans <<"\n";
}   

int main() {
    speed();
    for(int i = 0; i < K; i++) {
        for(int j = 0; j <  N; j++) {
            dp[i][j + 1] += dp[i][j] + ((j & (1 << i)) ? 0 : 1);;
        }
    }
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}