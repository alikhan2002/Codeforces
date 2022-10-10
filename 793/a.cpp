#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n==2) {
        cout << "2\n";
        return;
    }
    int res = 0;
    int l = (n/2)-1, r = n/2;
    while(l>=0 and s[l] == s[n/2]) {
        res++;
        l--;
    }
    while(r < n and s[r] == s[n/2]) {
        res++;
        r++;
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