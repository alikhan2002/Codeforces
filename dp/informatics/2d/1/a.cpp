#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1));
    dp[0][0] = 1;
    for(int i = 0; i < n;i++) 
        dp[i][0] = 1;  
    
    for(int i = 0; i < m;i++) 
        dp[0][i] = 1;  
    
    for(int i = 1;i < n ;i++) 
        for(int j = 1; j < m; j++) 
            dp[i][j] += dp[i][j - 1] + dp[i - 1][j];
    
    cout << dp[n - 1][m - 1] << "\n";
}