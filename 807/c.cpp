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

    ll n, c, q;
    cin >> n >> c >> q;
    string s; cin >> s;
    vector<ll> l(c + 1), r(c+1);
    vector<ll> dif(c + 1);
    dif[0] = n;
    for(int i = 0; i < c; i++){
        cin >> l[i] >> r[i];
        dif[i + 1] = (r[i] - l[i] + 1) + dif[i];
    }
    while(q--) {
        ll k;
        cin >> k;
        k--;
        for(int i = c - 1;  i >= 0; i--) {
            if(k >= dif[i]) 
                k = k - dif[i] + l[i] - 1;
        }
        cout << s[k - 1] << "\n";
    }

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}