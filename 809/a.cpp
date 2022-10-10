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
    cin >> n >> m;
    string res = "";
    rep(i, m) res += "B";
    m--;
    map<int, int> mp;
    for(int i = 0; i < n ; i++) {
        int x; cin >> x;
        x--;
        int ind = min(x, m - x);
        if(!mp[ind]) {
            res[ind] = 'A';
            mp[ind]++;
        }else if(ind == x) res[m - x] = 'A';
        else res[x] = 'A';
    }
    cout << res;
    cout << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}