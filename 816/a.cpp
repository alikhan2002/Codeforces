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
        ll n, m;
        cin >> n >> m;
        ll a = n, b = m;
        if(n==1 and b==1) {
            cout << "0\n";
            return;
        }
        if(m > n) {
            n = b;
            m = a;
        }
        // if(m - 2 >= 1)
        int res =  n+ m + m - 2;
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