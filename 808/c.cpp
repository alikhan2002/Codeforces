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
    vi v(n);
    rep(i, n) {
        cin >> v[i];
    }
    for(int i = 1; i < n;i++) {
        if(v[i]%v[0] != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    // sort(all(v));

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}