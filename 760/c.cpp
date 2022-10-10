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
        ll d = -1;
        rep(i , n) cin >> v[i];

        ll a = v[0], b = v[1];

        for(int i = 0; i < n; i += 2) {
            a = __gcd(a, v[i]);
        }
        for(int i = 1; i < n; i += 2) {
            if(v[i]%a == 0) a = 1;
        }
        if(a != 1) {
            cout << a << "\n";
            return;
        }
        a = v[1];
        for(int i = 1; i < n; i += 2) 
            a = __gcd(a, v[i]);
        
        for(int i = 0; i < n; i += 2) {
            if(v[i] % a == 0) a = 1;
        }
        if(a != 1) {
            cout << a << '\n';
            return;
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