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
    int n, m, x, y, d;
    cin >> n >> m >> x >> y >> d;
    if((x - d <= 1 or y + d >= m) and ( y - d <= 1 or x + d>= n)) cout <<"-1\n";
    else cout << n + m - 2 << "\n";
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}