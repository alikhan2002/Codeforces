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
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vi a(n);
    rep(i, n) cin >> a[i];

    vector<vector<int>> dp(n, vector<int> (2));
    sort(all(a));
    dp[0][0] = 1000000;
    dp[0][1] = 0;
    for(int i = 1; i < n; i++) {    
        dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]) + (a[i] - a[i - 1]); // лучший результат, когда связали с предыдущим
        dp[i][1] = dp[i - 1][0];// лучший результат, когда не связали с предыдущим
    }
    cout << dp[n - 1][0] << "\n";
}