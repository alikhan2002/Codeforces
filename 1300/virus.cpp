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
#define speed() ios_base::sync_with_stdio(false);cin.tie(0)

using namespace std;

const int N = 1e5 + 5;

void solve() {
    int n, m;
    cin >> n >> m;
    vi v(m);
    long long res = 0;
    vi dif;
    
    for(int i = 0; i < m; i++) {
        cin >> v[i];
    }
    sort(all(v));
    for(int i = 0; i < m; i++) {
        // if(!i) dif.pb(v[i] - 1);
        if(i) dif.push_back(v[i] - v[i - 1] - 1);
    }
    dif.push_back(v[0] - 1 + n - v[m - 1]);
    sort(all(dif), greater<int>());
    for(int i = 0; i <sz(dif); i++) {
        if(dif[i] - 4 * (i) >= 1) {
            res += ((dif[i] - 4 * i) > 1 ? (dif[i] - 4 * i - 1) :dif[i] - 4 * i ) ;
        }else break;
    }
    cout << n - res << "\n";
    
}

int main() {
    speed();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}