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
        int n,x;
        cin >> n >> x;
        vi v(n), a;
        rep(i, n) cin >> v[i];
        a = v;
        sort(all(a));
        bool ok = true;
        for(int i = n - x; i < x ; i++) {
            if(a[i] == v[i]) continue;
            else {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n": "NO\n");
    
        
    }

    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }