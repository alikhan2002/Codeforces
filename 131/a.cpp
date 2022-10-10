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
    int n = 2;
    vector<vector<int>> v(n, vector<int> (n));
    int res = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n;j++) {
            cin >> v[i][j];
        }
    }
    bool all = false, one = false;
    int ones = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n;j++) {
            if(v[i][j] == 1) {
                ones++;
            }
        }
    }
    if(ones == 4) {
        cout << "2\n";
    }else if(ones != 0) {
        cout << "1\n";
    }else cout << "0\n";

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}