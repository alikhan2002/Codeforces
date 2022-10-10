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
    int n;
    cin >> n;
    vector<int> cnt(n);
    rep(i, n) cin >> cnt[i];
    int mx = *max_element(all(cnt));
    for(int i = 0; i < n ;i++) {
        if(mx == cnt[i]) {
            cout << i + 1 <<"\n";
            return;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}