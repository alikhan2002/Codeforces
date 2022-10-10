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

using namespace std;
void solve() {
    // cin >> a >> b >> c >> d;
    int res = 0;
    vector<int> v(5);
    for(int i = 0; i < 4; i++) {
        cin >> v[i];
    }
    for(int i = 1; i < 4; i++) {
        if(v[i] > v[0]) res++;
    }
    cout << res << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}