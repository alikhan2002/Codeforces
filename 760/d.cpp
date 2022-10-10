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
        int n,k;
        cin >> n >> k;
        vi v(n);
        rep(i, n) cin >> v[i];
        sort(all(v), greater<int>());
        int res = 0;
        for(int i = 0; i < k; i++) {
            res += v[i + k]/v[i];
        }
        for(int i = 2 * k; i < n; i++) res += v[i];
        cout << res <<"\n";
    }
    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }