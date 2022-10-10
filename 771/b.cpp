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
int k = 1;
void solve() {
    int n;
    cin >> n;
    vi a(n), even, odd;

    for(int i = 0; i < n; i++) {
        cin >>a[i];
        if(a[i] & 1) odd.pb(a[i]); else even.pb(a[i]);
    }
    // cout << k << " ";
    bool sorted = is_sorted(all(odd)) & is_sorted(all(even));
    cout << (sorted ? "YES\n": "NO\n");
    k++;

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}