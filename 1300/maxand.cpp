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
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> v(n), cnt(31, 0);
    rep(i, n) 
    {
        cin >> v[i];
        for(int j = 30; j >= 0; j--) {
            if(v[i] & (1 << j)) {
                cnt[j]++;
            }
        }
    }
    int ans = 0;
    
    for(int i = 30; i >= 0; i--) {
        int need = n - cnt[i];
        if(need <= k) {
            k -= need;
            ans += (1 << i);
        }
    }
    cout << ans << "\n";
}   

int main() {
    int t;
    cin >> t;
    while(t--) 
        solve();
    
}