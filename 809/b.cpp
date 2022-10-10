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
    vector<int> res(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        res[v[i]] = 1;
    }
    map<int, int> mp;
    mp[v[0]] = 1;
    for(int i = 1; i <= n ;i++) {
        if(mp[v[i]]) {
            int dif = i - mp[v[i]] - 1;
            if(dif%2 == 0) res[v[i]]++;
            mp[v[i]] = i;
        }else {
            mp[v[i]] = i;
        }
    }
    rep(i, n) cout << res[i + 1] <<" ";
    cout << "\n";

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}