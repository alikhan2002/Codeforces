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
    vi v(n);
    long long sum = 0;
    rep(i, n) {
        cin >> v[i];
        sum += v[i];
    }
    if(!sum) {
        cout <<"0\n";
        return;
    }
    long long mx = *max_element(all(v));
    if(2*mx <= sum) cout <<"1\n";
    else cout << 2*mx - sum <<"\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}