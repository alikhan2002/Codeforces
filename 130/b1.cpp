#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    while(q--) {
        int x, y;
        cin >> x >> y;
        long long res = 0;
        int k =y, i = n - x;
        while(k--) {
            res += a[i];
            i++;
        }
        cout << res <<"\n";
    }

}

int main() {
    solve();
}