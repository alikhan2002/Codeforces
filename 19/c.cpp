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
#define speed() ios_base::sync_with_stdio(false);cin.tie(0)

using namespace std;

const int N = 1e5 + 5;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vi odd, even;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(n == 3) {
        if(a[1] &1) 
            cout << "-1\n";
        else cout << a[1]/2 << "\n";
        return;
    }
    ll ans = 0;
    bool ok = false;
    rep(i, n - 2) {
        ok |= a[i + 1] > 1;
        ans += (a[i + 1] + 1)/2;
    }


    cout << (ok? ans: -1) << "\n";

}

int main() {
    speed();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}