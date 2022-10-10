#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> dp(n, vector<long long>(m)), a(n, vector<long long>(m));
    for(int i = 0; i < n; i++) 
        for(int j = 0;j < m; j++) cin >> a[i][j];
    
    for(int i = 0;i < n; i++) {
        if(a[i][0] != 0) dp[i][0] = 1;
        else break;
    }
    for(int i = 1;i < m; i++) {
        if(a[0][i] != 0) dp[0][i] = 1;
        else break;
    }
    for(int i = 1; i < n; i++) {
        for(int j = 1;j < m ;j++) {
            if(a[i][j] != 0) dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
        }
    }

    if( dp[n-1][m-1] == 0) {
        cout << "Impossible\n";
    }else cout << dp[n-1][m-1] << "\n";
}