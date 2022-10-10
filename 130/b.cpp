#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<long long> a(n),p(n+1);
    for(int i = 0; i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    p[0] = a[0];
    for(int i =1;i < n ; i++) {
        p[i] =a[i]+ p[i-1];
    }

    while(q--) {
        int x, y;
        cin >> x >> y;
        long long res = 0;
        if(x==y and x == 1) {
            cout << p[0] << "\n";
        }else if(x==y) {
            cout << p[x-1] << "\n";
        }else cout << p[x-1] - p[x-y-1] <<'\n';
        // cout << p[n-x + y -1] << "\n";
        // cout << res <<"\n";
    }

}

int main() {
    solve();
}