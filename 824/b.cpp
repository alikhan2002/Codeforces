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
        vector<int> a(n);
        rep(i, n) {
            cin >> a[i];

        }
        if(n == 1) {
            cout << "0\n";
            return;
        }
        int ans = 0;
        sort(all(a));
        int mn = a[0];
        for(int i = 1; i < n; i++) {
            if(mn != 1) {
                if(a[i] >= mn * 2) {
                        // cout << a[i] <<"\n";
                        ans += (a[i] / (mn*  2 - 1)) - 1;
                        if(a[i]%(mn*2 - 1) > 0) ans++;
                        // cout << a[i] << "sf\n";
                }
            }
            else{
                ans += a[i] - 1;
            }
        }
        cout << ans<<"\n";

    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }