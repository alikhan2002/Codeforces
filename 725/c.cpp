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
        vector<int> v(n);
        rep(i, n) cin >> v[i];
        sort(all(v));
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            int left = 0, right = n - 1;
            while(left <= right) {
                int m = (left + right) /2;
                if(v[i] + v[m] <= r) left = m + 1;
                else right = m - 1;
            }
            int x1 = right;
            left = 0, right = n - 1;
            while(left <= right) {
                int m = (left + right) >> 1;
                if(v[i] + v[m] >= l) right = m - 1;
                else left = m + 1;
            }
            int x2 = left;
            if(x1 < x2)continue;
            if(x1 >= i and x2 <= i) x1--;
            ans += x1 - x2 + 1;
        }
        cout << ans/2 <<"\n";
    }
    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }