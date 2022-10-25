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
        vector<int> v(n);
        rep(i, n) cin >> v[i];
        sort(all(v));
        for(int i =0; i < n - 1;i++) {
            if( v[i] == v[i + 1]) {
                cout <<"NO\n";
                return;
            }
        }
        cout <<"YES\n";
    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }