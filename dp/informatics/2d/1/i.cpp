#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1)), a(n, vector<long long>(m));
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m ;j++) 
            cin >> dp[i][j] ;
        


    for(int i = 1; i < n;i++) 
        dp[i][0] += dp[i - 1][0];  
    
    for(int i = 1; i < m;i++) 
        dp[0][i] += dp[0][i - 1];  
    

    vector<char> res;
    for(int i = 1;i < n ;i++) { 
        for(int j = 1; j < m; j++){ 
            dp[i][j] += max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    int j = m - 1;
     for(int i = n - 1; i >= 0; i--) { 
        while(j >= 0) {
            if(i == 0 and j == 0) 
                break;
            
             if(i == 0) {
                res.push_back('R');
                j--;
                continue;
            }
            if(j == 0) {
                res.push_back('D');
                break;
            }

            if(dp[i][j - 1] >= dp[i - 1][j]) {
                res.push_back('R');
                j--;
            }else{
                res.push_back('D');
                break;
            }
        } 
           
    }
    reverse(res.begin(), res.end());
    cout << dp[n - 1][m - 1] << "\n";
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    
    cout << '\n';
}