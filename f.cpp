#include <bits/stdc++.h>

using namespace std;

#define ll long long
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    if(n == 1) cout <<v[0] << '\n';
    if(n == 2) cout << min({abs(v[0]),abs(v[1]), abs(v[0] + v[1]) }) << "\n";
    vector<int> dp(n);
    dp[0] = v[0];
    dp[1] = min(v[1], abs(v[0] + v[1]));
    for(int i = 2; i < n; i++) {
        dp[i] = min(v[i], abs(dp[i - 1] + v[i]));
    }
    int mn = INT_MAX;
    for(int i = 0; i < n ;i++) {
        cout << dp[i] << " \n"[i == n - 1];
        if(dp[i] >= 0)
            mn = min(dp[i], mn);
    }

    cout << mn <<"\n";
    
}

int main() {
    // int t; 
    // cin >> t;
    // while(t--)
        solve();
    
}