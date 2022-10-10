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
        int n, k;
        cin >> n >> k;
        vi a(n), b(n);
        rep(i, n){
            cin >> a[i];
            b[i] = a[i];
        }
        if(n == 1) {
            cout << "0\n";
            return;
        }
        int res = 0;
        sort(all(a));
        // reverse(all(a));
        int j = 0;
        for(int i = 0; i < n; i++) {
            if(b[i] > k and i < k) res++;
        }
        cout << res <<"\n";
    }   

    int main() {
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }