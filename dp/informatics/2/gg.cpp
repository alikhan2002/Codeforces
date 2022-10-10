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

int main() {
    int n;
    cin >> n;
    vi dp(1000000);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i = 4; i <= n; i++) {
        if(i % 3 == 0) dp[i - 1] = min(dp[i - 1], dp[i / 3]) ;
        if(i % 2 == 0 ) dp[i - 1] = min(dp[i - 1], dp[i /2]) ;
        dp[i] = dp[i - 1] + 1;
    }
    cout << dp[n];
}