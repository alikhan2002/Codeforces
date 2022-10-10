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

 

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        cout <<"sf\n";
        int n,m;
        cin >> n >> m;
        vi v(n);
        rep(i, n) cin >> v[i];
        // vector<int> dp(200010);
        vector<int>  dp(n);
        dp[0] = 1;
        for(int i = 1; i < n;i++) {
            cout << "sfl\n";
            int j = i;
            if(v[i] == v[i - 1]){
                while(j < n  and v[j] == v[j - 1]) {
                    j++;
                    dp[j] = dp[i];
                }
                i = j - 1;
            }
            if(i)
                dp[i] = dp[i - 1] + 1;
        }
        // cout <<"wofj\n";
        while(m--) {
            int i, x;
            cin >> i >> x;
            if(i > 0) {
                if(v[i - 1] == v[i]) dp[i - 1] = 1;
            
        }
        for(int i = 0; i < n; i++) cout << dp[i]<<" ";

    }