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
    int n, H, M;
    cin >> n >> H >> M;
    int x = 60 * H + M;
    int res = 10000000;
    while(n--) {
        int h, m;
        cin >> h >> m;
        int y = h * 60 + m;
        if(y >= x)
            res = min(abs(y - x), res);
        else res = min(abs(60*(h + 24) + m - x), res);
    }
    cout << res / 60 <<" " << res % 60 <<"\n";

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}