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
        vi v(n), dup;
        rep(i, n) 
            cin >> v[i];
        sort(all(v));
        rep(i, n) {
            if(i) {
                if(v[i] != v[i - 1]) 
                    dup.pb(v[i]);
            }else dup.pb(v[i]);
        }
        if(sz(dup) == 1) {
            cout << "-1\n";
            return;
        }
        int gcd = 0;
        rep(i, sz(dup)) {
            if(i) {
                gcd = __gcd(gcd, abs(dup[i] - dup[i - 1]));
            }
        }
        cout << gcd << "\n";
        


    }
    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }