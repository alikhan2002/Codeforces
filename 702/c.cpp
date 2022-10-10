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
        ll x;
        cin >> x;
        ll a, b;
        vector<ll> c;
        for(ll i = 1; i * i * i <= 1e12 + 1; i++) c.pb(i * i * i);
        bool ans = false;
        // rep(i, sz(c)) cout << c[i] << " \n"[i == sz(c) - 1];
        // cout << sz(c)<<"\n";
        for(int i = 0; i < sz(c); i++) {
            ll l = 0, r = sz(c) - 1;
            while(l <= r) {
                ll m = l + (r - l)/2;
                if(x - c[i] == c[m]) {
                    ans = true;
                    break;
                }
                if(x - c[i] > c[m]) l = m + 1;
                else r = m - 1;

            }
        }
        // 703657519796
        cout << (ans? "YES\n": "NO\n");



        // 1 1  -- 2
        // 1 2 -- 9
        // 1 3 --- 28
        // 1 4 --- 65
        // 1 5 -- 126
        // .....
        // 2 2 -- 16
        // 2 3 --- 35
        // 2 4 --- 72
        // 2 5 --- 133

        // 3 3 --- 54
        // 3 4 --- 91
        // 3 5 --- 152
    }
    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }