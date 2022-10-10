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
        int n, m;
        cin >> n >> m;
        vector<int> v;
        for(int i = 0; i < n;i++) {
            for(int j = 0; j < m; j++) {
                v.pb(max(i, n - i - 1) + max(j, m - j - 1));
            }
        }
        sort(all(v));
        // cout << sz(v) <<"\n";/
        for(int i = 0; i < sz(v);i++) 
            cout << v[i] <<" \n"[i == sz(v) - 1];
    }   

    int main() {
        cin.tie(0);
        ios::sync_with_stdio(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }