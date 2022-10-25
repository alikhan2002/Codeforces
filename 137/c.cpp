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
    rep(i, n ){
        cin >> v[i];

    }
    int res = 0;
    int k = 10 - n;
    while(k--) {
        res += (6 * k);
        // cout << k <<"\n";
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