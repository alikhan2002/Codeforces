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
    int n, l, r;
    cin >> n >> l >> r;
    bool res = 1;
    for(int i = 1; i <= n; i++) {
        if(r/i * i < l) {
            res = 0;
            break;
        } 
    }
    if(!res) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for(int i = 1; i <= n; i++) {
        cout << r/i * i << " ";
    }
    cout << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}