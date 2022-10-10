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
    ll k, x;
    cin >> k >> x;
    ll sum = 0;
    ll res = 0;
    ll l = 1, r = 2*k - 1;
    while(l <= r) {
        ll m = l + (r - l)/2;
        ll t = (m*(m+1))/2;
        if(t >= x) {
            r = m - 1;
            res = m;
        }else l = m + 1;

    }
    cout << res <<"\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}