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
        int n, m;
        cin >> n >> m;
        vi a(n), b(n), v(n);
        rep(i, n) cin >> a[i];
        rep(i, m) cin >> b[i];
        sort(all(a), greater<int>());
        sort(all(b), greater<int>());
        
        rep(i, n) {
            int t = INT_MAX;
            rep(j, m) {
                t = min(t, a[i] & b[j]);
            }
            v[i] = t;
        }
        int ans = v[0];
        rep(i, n) cout << v[i] << " ";
        cout << '\n';
        for(int i = 1; i < n; i++) ans |= v[i];
        cout << ans <<"\n";
        
    }
    int main() {
        solve();
    }