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
    rep(i, n) cin >> v[i];

    long long res = 0;
    rep(i, n - 2) {
        if(v[i]) {
            res += v[i];
            if(v[i + 1] == 0) {
                i++;
                while(i < n - 2 and v[i] == 0 ) {
                    i++;
                    res++;
                }
                i--;
            }
        } 
    }
    if(v[n - 2] !=0)
        res += v[n - 2];
    else if(v[n- 2] == 0 and res != 0)res++;
    cout << res << "\n";

//     2 0 0 0 4 6
// 1 1 0 0 4 6
// 0 1 1 0 4 6
// 0 0 1 1 4 6
// 0 0 0 1 4 6
// 0 0 0 0 4 6
// +4\\\\


// 3 0 0
// 2 1 0
// 1 1 1
// 0 1 2
// 0 0 3

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}