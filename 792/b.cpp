#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    cout << c*b + a <<" " << b << " " << c*b + a + c<< '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}