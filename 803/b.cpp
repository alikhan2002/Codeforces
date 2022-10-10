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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int res = 0;
    for(int i = 1; i < n - 1;i++) {
        if( a[i] > a[i - 1] + a[i + 1] and k > 1) res++;

    }
    if(k == 1) {
        int i = 1;
        while(i < n - 1) {
            i += 2;
            res++;
        }
    }
    cout <<res<<"\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}