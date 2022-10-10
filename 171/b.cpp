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
        vector<int> a(n);
        for(int i = 0; i < n;i++) 
            cin >> a[i];
        if(n == 1) {
            if(a[0] <= k) {
                cout <<"1\n";
            }else cout<<"0\n";
            return;
        }
        
        vector<int> pre(n + 1);
        pre[1] = a[0];
        for(int i = 2; i <= n; i++) {
            pre[i] = pre[i - 1] + a[i - 1];
        }
        // for(int i = 0; i <= n; i++) 
        //     cout << pre[i] <<" \n"[i == n];
        int res = 0;
        for(int i = 0; i <= n ;i++) {
            int l = i, r = n;
            while(l <= r) {
                int m = l + (r - l) /2;
                // cout << m<<"\n";
                if(pre[m] - pre[i] > k) {
                    r = m - 1;
                    // cout <<"yes\n";
                }else l = m + 1;
            }
            res = max(res, r - i);
        }
        cout << res <<"\n";
        
    }
    int main() {
        solve();
    }