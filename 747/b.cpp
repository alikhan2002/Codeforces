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
        ll n, k;
        cin >> n >> k;
        ll ans = 0, p = 1;
        const ll INF = 1e9 + 7;
        for(int i = 0; i < 32; i++) {
            if(k & (1 << i)) {
                ans = (ans + p)%INF;
            }
            p *= n;
            p %= INF;
        }
        cout << ans << "\n";
        /*
        3^0  0001 1
        3^1   0010 2
        3^0 + 3^1 0011 3
        3^2   0100 4
        3^0 + 3^2 0101 5
        3^1 + 3^2 0110 6
        3^0 + 3^1 + 3^2 0111 7
        3^3   1000 8 
        */
    }   

    int main() {
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }