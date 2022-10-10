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
    vector<ll> pos, neg, v(n);
    rep(i, n) {
        cin >> v[i];
        if(v[i] > 0) pos.pb(v[i]);
        else if(v[i] < 0)neg.pb(abs(v[i]));
    }
    long long sum = 0;
    // long long sum_neg = 0;
    ll mx_pos = 0, mx_neg = 0;
    if(sz(pos))
        mx_pos = *max_element(all(pos));
    if(sz(neg))
        mx_neg = *max_element(all(neg));
    sort(all(pos));
    sort(all(neg));
    ll mx = max(mx_neg, mx_pos);
    for(int i = sz(pos) - 1; i >= 0; i -= k) {
        sum += 2*pos[i];
    }

    for(int i = sz(neg) - 1; i >=0; i -= k ) {
        sum += 2*(neg[i]);
    }
    cout << sum - mx<<"\n";
    // cout << sum - sum_neg<<"\n";

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}