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
    int n, m;
    cin >> n >> m;
    vector<int> a(m), cnt(n);
    for(int i = 0; i < m; i++) {
        cin >> a[i];
        a[i]--;
        cnt[a[i]]++;
    }

    int l = 0, r = 2 * m;
    int  res = -1;
    while(l <= r) {
        int m = l + (r - l)/2;
        ll need = 0, extra = 0;
        for(int i = 0; i < n; i++) {
            if(m >= cnt[i]){
                extra += (m - cnt[i])/2;
            }else need += cnt[i] - m;
        }
        if(need<= extra) {
            r = m - 1;
            res = m;
        }else l = m + 1;
    }
    cout << res <<"\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}