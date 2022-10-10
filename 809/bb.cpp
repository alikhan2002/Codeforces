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

    vector<int> v(n + 1);
    map<int, vector<int>> mp;
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        mp[i].pb(i);
    }
    for(int i = 1; i <= n; i++) {
        vector<int> temp = mp[i];
        int l = 0, r = 1;
        int ans = temp.size() > 0;
        while(r < temp.size()) {
            if((temp[r] - temp[l])%2==1) {
                ans++;
            }
        }
        c
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}