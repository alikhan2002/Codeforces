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
    int s;
    cin >> s;
    string res = "";
    int q = 9;
    while(s) {
        if(s / q) {
            res += to_string(q);
            s -= q;
        }
        q--;
    }
    sort(all(res));
    cout << res << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}