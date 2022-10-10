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
        int n, x, m;
        cin >> n >> x >> m;
        int l= x , r = x;
        while(m--){
            int c, d;
            cin >> c >> d;
            if((l >= c and l <= d) or (r >= c and r <= d)) {
                l = min(l, c);
                r = max(r, d);
            }
        }
        cout << r - l + 1 <<"\n";
    }
    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }