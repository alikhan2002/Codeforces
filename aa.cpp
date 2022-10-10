#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long s, a, b, c;
    cin >> s >> a >> b >> c;
    long long ans = 0;
    if(s/c >= a)
        cout << ((s/c)/a)*b + s/c <<"\n";
    else cout << s/c << '\n';
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
}