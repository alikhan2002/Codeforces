        #include <bits/stdc++.h>
        #include <numeric>

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
            int n, k;
            cin >> n >> k;
            vector<ll> v(n + 1), a(k + 1);
            for(int i = 0; i < n;i++) cin >> v[i];
            for(int i = 0; i < n; i++){
                a[(i+1)%k] = max(a[(i+1)%k], v[i]);
            }
            ll res = 0;
            for(int i = 0; i < k;i++){
                res += a[i];
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