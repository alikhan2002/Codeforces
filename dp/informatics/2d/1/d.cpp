#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> dp(10, vector<long long>(10));

    int res  = 0;
    dp[m][n] = 1;
    for(int i = m; i <= 8; i++) {
        for(int j = 1; j <= 8; j++) {
            dp[i + 1][j - 1] += dp[i][j];
            dp[i + 1][j + 1] += dp[i][j];
        }
    }
    for(int j = 1; j <= 8; j++) 
        res += dp[8][j];

    cout << res << "\n";

    

}