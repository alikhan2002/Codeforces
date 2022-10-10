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
    int n; cin >> n;
    vi v(n + 1);
    vi vis(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    for(int i = n; i >= 1; i--) {
        if(!vis[v[i]]) vis[v[i]] = 1;
        else {
            cout << i <<'\n';
            return;
        }
    }
    cout << "0\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}