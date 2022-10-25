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
        int n;
        cin >> n;
        int q;
        cin >> q;
        vector<ll> v(n);
        ll odd = 0, even = 0;
        ll res = 0;
        int oddSize = 0, evenSize = 0;
        rep(i , n){
            cin >> v[i];
            if(v[i] &1) {
                // oddSize++;
                odd ++;
            }else {
                even++;
                // even+= v[i];
            }
            res+=v[i];
        }
        // ll res = even + odd;
        // cout << even << " "<< evenSize<<"\n";
        while(q--) {
            int a, b;
            cin >> a >> b;
            if(a) {
                res += (odd*b);
            }else res+= (even *b);
            if(b&1) {
                if(!a) odd = n, even = 0;
                else odd= 0, even = n;
            }
            cout << res <<"\n";
        }
        // cout << even <<" "<< odd<<"\n";
        // cout << res <<"\n";

    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }