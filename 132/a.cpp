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
    int x;
    cin >> x;
    vector<int> v(4);
    for(int i = 1; i <= 3; i++) cin >> v[i];

    int res = 0;
    int c = x;
    int i = 0;
    // if(c == )
    while(v[c] != 0) {
        c = v[c];
        i++;
    }
    // cout << i << "\n";
    if(i == 2) cout << "YES\n";
    else cout << "NO\n";
    

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}