#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string pow = to_string(n);
    cout << pow.size();
    int sz = pow.size() - 1;
    int e = pow(10, int(sz));
    cout << n -e << "\n";

}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
}