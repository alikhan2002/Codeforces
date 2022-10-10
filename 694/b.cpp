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
        int n, x;
        cin >> n >> x;
        vi v(n);
        ll res = 0;
        int k = 100;
        vector<int> c(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            int t = v[i];
            res += t;
            int p = 0;
            while(t % x == 0) {
                t /= x;
                p++;
            }
            k = min(p, k);
            c[i] = k;
        }
        for(int i = 0; i < n; i++) {
            res += 1ll* v[i] * k;
        }
        for(int i = 0; i < n; i++) {
            if(c[i] == k) break;
            res +=  v[i];
        }
        cout << res <<"\n";
    }
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--)
            solve();
    }