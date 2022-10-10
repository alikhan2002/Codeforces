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
    string s;
    cin >> s;
    if(s.size() == 1 or s[0] == '0') {
        cout << "1\n";
        return;
    }
    bool one = false, zero = false, uknown = false;
    int o = 0, z = 0, u = 0;
    for(int i = 0; i < sz(s); i++) {
        if(s[i] == '1') {
            one = true;
        }else if(s[i] == '0') {
            zero = true;
            if(one) z++;
        }else {
            uknown = true;
            if(one) u++;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}