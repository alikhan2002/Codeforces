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
    map<int,int> mp;
    int res = 0;
    for(int i = 0; i < n; i++) {
        int h, m;
        cin >> h >> m;
        mp[h * 60 + m]++;
        res = max(res, mp[h * 60 + m]);
    }
    cout << res <<"\n";

}
int main() {
        solve();
}