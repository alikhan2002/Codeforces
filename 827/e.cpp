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
        int n, q;
        cin >> n >> q;
        vector<ll> v(n);
        rep(i, n) cin >> v[i];
        vector<ll> p(n);
        p[0] = v[0];
        for(int i = 1; i < n ;i++) {
            p[i] = p[i - 1] + v[i];
        }
        vector<ll> maxi(n);
        ll mx = v[0];
        maxi[0] = mx;
        for(int i = 1; i < n; i++) {
            if(mx < v[i]) {
                mx = v[i];
            }
            maxi[i] = mx;
        }
        for(int i = 0; i < q; i++) {
            int k;
            cin >> k;
            int ind = upper_bound(maxi.begin(), maxi.end(), k) - maxi.begin();
            // cout << ind <<"\n";
            if(ind == 0) cout << 0 <<" ";
            else cout << p[ind - 1] << " ";
            // else cout << p[]
 
        }
        cout <<"\n";

    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }