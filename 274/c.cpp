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
        vector<int> a(n), b(n);
        vector<pair<int,int>> p;
        for(int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
            p.pb({a[i], b[i]});
        }        
        if(n == 1) {
            cout << min(a[0], b[0]);
            return;
        }
        sort(all(p));
        int res = 0;
        res = p[0].second;
        for(int i = 1; i < n; i++) {
            if(p[i].second >= res) res = p[i].second;
            else {
                res = p[i].first;
            }
        }
        cout << res <<"\n";
    }
    int main() {
        solve();
    }