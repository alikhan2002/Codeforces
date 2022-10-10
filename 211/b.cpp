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
        vector<int> a(n + 1), pre(n + 1);
        for(int i = 1; i <= n; i++) cin >> a[i];

        // pre[1] = a[1];
        int res = INT_MAX;
        int ind = 1;
        for(int i = 1; i <= n; i++) {
            pre[i] += pre[i - 1] + a[i];
            if(i >= k) {
                // res = min(res, pre[i] - pre[i - k]);
                if(res > pre[i] - pre[i - k]) {
                    res = pre[i] - pre[i - k];
                    ind = i - k + 1;
                }
            }
        }
        cout << ind <<"\n";
        
    }
    int main() {
        solve();
    }