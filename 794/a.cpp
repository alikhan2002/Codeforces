#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0 ; i < n ;i++) {
        int sum = 0;
        for(int j = 0; j < n ;j++) {
            if(i !=j) sum+= v[j];
        }
        if (sum == (n - 1) * v[i]) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";

}

int main() {

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}