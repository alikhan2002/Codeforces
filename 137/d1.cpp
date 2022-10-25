#include <bits/stdc++.h>

#define f first
#define s second
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;


void solve() {
    set<ll> s;
    map<ll, ll> mp;
    int q;
    cin >> q;
    while(q--) {
        char c;
        long long x;
        cin >> c >> x;
        if(c=='+') {
            s.insert(x);
        }
        else{
            for(ll i = max(mp[x], x);; i += x) {
                // cout << i <<"\n";
                if(!s.count(i)) {
                    mp[x] = i; 
                    cout << i <<"\n";
                    break;
                }
            }
        }

    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
}