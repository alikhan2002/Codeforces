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
    vi v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    vi a;
    ll res = 0;
    for(int i = 1; i <=n ;i++) {
        if(v[i] >= i) continue;
        res += (ll)(lower_bound(a.begin(), a.end(), v[i]) - a.begin());
        int ind = (lower_bound(a.begin(), a.end(), v[i]) - a.begin());
        a.pb(i);
        // cout << " " << v[i] << " " << i <<" "<<ind << "\n";
    }
        // for(int j = 0; j < sz(a); j++) cout << a[j] << " \n"[j == sz(a) - 1];
    cout << res <<"\n";

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}