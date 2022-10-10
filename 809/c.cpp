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

    vector<ll> v(n);
    for(int i = 0; i < n; i++) 
        cin >> v[i];
    if((n & 1)) {
        ll ans = 0;
        for(int i = 1; i < n - 1; i += 2) {
            ans += max(0ll, max(v[i - 1], v[i + 1]) - v[i] + 1);
        }
        cout << ans <<"\n";
    }else {
        ll ans = 0;
        for(int i = 1; i < n - 1; i += 2) {
            ans += max(0ll, max(v[i - 1], v[i + 1]) - v[i] + 1);
        }
        ll tot = ans;
        for(int i = n - 2; i > 0; i-= 2) {
            tot -= 
        }
    }
    
    
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}