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
    // bool comp()
    void solve() {
        int n;
        cin >> n;
        vector<ll> x(n);
        rep(i, n)cin >> x[i];
        rep(i, n) {
            int y;
            cin >> y;
            x[i] = y - x[i];
        }
        int res =0;
        sort(all(x));
        int l = 0, r = n -1;
        // rep(i , n)cout<< x[i]<<" \n"[i == n- 1];
        while(l <= r) {
            while(x[l] + x[r] < 0 and l <= r) {
                l++;
                // r--;
                // l++;
                // res++;
            }
            if(l>= r) break;
            r--;
            l++;
            res++;
        }        
        // res += (n - ind - res)/2;
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