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
    vector<int> v(n);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];

    } 
    map<int, vector<int> > mp;


    int x, y;
    int e = m;
    while(m--) {
        cin >> x >> y;
        mp[x].pb(y);
    }
    

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}