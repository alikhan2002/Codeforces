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
    if(n & 1) {
        cout << "-1\n";
        return;
    }
    cout << n / 2 << " 0 0\n";

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}