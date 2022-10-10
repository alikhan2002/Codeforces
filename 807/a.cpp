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
    int n, x;
    cin >> n >> x;
    int k = 2 * n;
    vi v(k);
    rep(i, k) {
        cin >> v[i];
    }
    sort(all(v));
    // int e = k /2;
    rep(i, n) {
        if(v[n + i] - v[i] < x) {
            // cout << v[n + i - 1] << " " << v[i] << " ";
            cout << "NO\n";
            return;
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