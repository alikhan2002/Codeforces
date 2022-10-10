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
    vector<int> a(n);
    int res = 1;
    for(int i = 0; i < n;i++) cin >> a[i];

    for(int i = 0; i < n; i++) {
        res = 1;
        for(int j = 0; j < n; j++) {
            if(i!=j) {
                res = a[j];
                while(++j < n ) {
                    if(j == i) continue;
                    res ^= a[j];
                }
            }
        }
        if(res == a[i]) {
            cout << a[i] << '\n';
            break;
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