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
#define rep(i,n) for(int i =0; i < n;i++)
using namespace std;

int N = 1010;
int main() {
    int n;
    string s, t;
    cin >> n;
    cin >> s >> t;
    vector<vector<int>> dp(N, vector<int> (N, 0));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(s[i - 1] == t[j-1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }else if(s[i -1] != t[j-1]) dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }

    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << dp[i][j] << " ";
        }
        cout << '\n';

    }
    cout << '\n';
    cout << dp[n][n];

}