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

using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1), p(n+1);
    for(int i = 1; i <= n ;i++) {
        cin >> v[i];
        p[i] = p[i - 1] + v[i];
    }
    if(p[n] < k) {
        cout << "-1\n";
        return;
    }
    int ans = INT_MAX;
    for(int i = 1; i <= n; i++) {
        int l = i, r = n; 
        while(l <= r) {
            int m = (l + r) >>1 ;
            if(p[m] - p[i - 1] > k) {
                r = m - 1;
            }else l = m + 1;
            // cout << l << " " << r << "\n";
        }
        ans = min(ans, i - 1 + n - r);
    }
    cout << ans << '\n';
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}