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
    vector<int> v(n);
    string s;
    cin >> s;
    string temp = "";
    temp += s[0];
    for(int i = 1; i < n; i++) {
        if(s[i - 1] != s[i]) temp += s[i];
        // if(i == n - 2) {
        //     if(s[i]!)
        // }
    }
    if(sz(temp) == 1) {
        cout <<"0\n";
        return;
    }
    int res = 0;
    for(int i = 0; i < sz(temp); i++) {
        if(temp[i] =='1') res++;
    }
    // cout << res <<"\n";
    res += res - 2;
    if(temp[sz(temp) -1] == '0')res++;
    cout << res <<"\n";
    // cout << temp <<"\n";

}
int main() {
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}