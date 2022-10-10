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
    int n = 2;
    map<char,int> mp;
    vector<vector<char>> v(2, vector<char>(2));
    set<char> s;
    rep(i, n) {
        rep(j, n) {
            cin >> v[i][j];
            mp[v[i][j]]++;
            s.insert(v[i][j]);
        }
    }
    cout << s.size() - 1 <<"\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}