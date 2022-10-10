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
    int e = n;
    int res = 0;
    // vector<pair<int,int>> a,b,c,d;
    int a =0, b= 0, c= 0, d=0;
    while(e--) {
        int x,y;
        cin >> x>> y;
        a = max(a, x);
        b = min(b, x);
        c = max(c, y);
        d = min(d, y);
    }
    res += (a + abs(b)+ c+ abs(d))*2;
    // sort(all(v));
    // rep(i, n) cout << v[i].first<< " " <<v[i].second<<"\n";
    // rep(i, n) {
    //     if(v[i].first)
    //         res += abs(v[i].first) * 2;
    //     else res += abs(v[i].second) * 2;
    // }
    cout << res <<"\n";
    // cout << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}