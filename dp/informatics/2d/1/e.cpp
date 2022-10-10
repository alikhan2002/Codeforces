#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> dp(n, vector<long long>(m));
    if(n==1 and m==1) {
        cout << "0\n";
        return 0;
    }
    
    dp[0][0] = 1;
    for(int i = 1; i < n; i++) {
        for(int j = 1;j < m;j++) {
            if(i - 2  >= 0 and j - 1 >= 0) dp[i][j] += dp[i - 2][j - 1];
            if(i - 1  >= 0 and j - 2 >= 0) dp[i][j] += dp[i - 1][j - 2];
        }
    }
    cout << dp[n - 1][m - 1] << "\n";
}