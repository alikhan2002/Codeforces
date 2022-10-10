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
    const int N = 2e5;
    void solve() {
        int n, q;
        cin >> n >> q;
        vector<vector<ll>> prefix(1001, vector<ll> (1001)), v(1001, vector<ll>(1001));
        ll h, w;
        for(int i = 0; i < n;i++) {
            cin >> h >> w;
            v[h][w] += h * w;
        }
        for(int i = 1; i <= 1000; i++) {
            for(int j = 1; j <= 1000;j++) {
                prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + v[i][j];
            }
        }
        // for(int i = 1; i <= 10; i++) {
        //     for(int j = 1; j <= 10;j++) {
        //         cout << prefix[i][j] << " \n"[j == 10];
        //     }
        // }
        ll a, b, c, d;
        while(q--){
            ll res= 0;
            cin >> a >> b >> c >>d;
            res =  prefix[c - 1][d -1] - prefix[c - 1][b] - prefix[a][d - 1] + prefix[a][b];
            // cout << prefix[a + 1][b + 1]<<"\n";
            // cout << prefix[c - 1][d- 1]<<"\n";
            cout << res << '\n';
        }
    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }