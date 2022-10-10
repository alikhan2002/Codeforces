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
    vector<int> res;
    for(int i = 1; i <= n; i += 2) {
        int j = i;
        while(j <= n) {
            res.pb(j);
            j *= 2;
        }
    }
    cout << 2 << "\n";
    rep(i, n) cout << res[i] << " \n"[i == n- 1];
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}