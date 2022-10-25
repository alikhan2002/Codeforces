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
    vector<int> v(n);
    rep(i, n)cin >> v[i];
    int res = INT_MAX;
    int g = 0;
    rep(i, n) {
        g = __gcd(g, v[i]);
    }
    if(g == 1) cout <<"0\n";
    else if(__gcd(g, n) == 1) cout <<"1\n";
    else if(__gcd(g, n - 1) == 1) cout <<"2\n";
    else cout <<"3\n";
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