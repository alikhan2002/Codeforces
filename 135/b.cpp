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
    vector<int> p(n);
    int x = p[0];
    rep(i, n) p[i] = i + 1;
    vector<int> cop = p;
    if(n & 1) {
        for(int i = 1; i < n - 4; i += 2) {
            // if(x >= p[i]) {
                swap(p[i], p[i - 1]);
            //     x = 0;
            // }else x += p[i];
        }
    }
    else {
        for(int i = n - 3; i>=0; i--) {
            p[i] = cop[n - 3 - i];
        }
    }

    rep(i, n ) cout << p[i] << " \n"[i == n - 1];


}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}