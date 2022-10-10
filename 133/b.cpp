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
    cout << n << "\n";
    vi v(n + 1);
    for(int i = 1; i <= n;i++) {
        cout << i << " ";
        v[i] = i;
    }
    cout << '\n';
    for(int i = 1; i < n; i++) {
        // cout << v[i] << " ";
        swap(v[i], v[i + 1]);
        for(int j = 1; j <= n; j++) {
            cout << v[j] << " ";
        }
        cout << '\n';
    }


}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}