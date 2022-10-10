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
    vi v(n), dp(n+1);
    rep(i, n) {
        cin >> v[i];
    }
    dp[0] = v[0];
    dp[1] = v[1]; 
    for(int i = 2;i < n;i++) {
        dp[i] = min(dp[i - 1], dp[i-2]) + v[i];
    }
    
    cout << dp[n - 1] << "\n";
}