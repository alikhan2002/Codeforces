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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        rep(i, n) {
            cin >> a[i];
        }
        rep(i, n) cin >> b[i];
        bool ok = true;
        for(int i = 0; i < n ;i++) {
            if(a[i] > b[i]) ok =false;
            if(b[i] > b[(i + 1)%n] + 1 and a[i]< b[i]) ok =false;
            
        }
        cout << (ok ? "YES\n": "NO\n");
    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }