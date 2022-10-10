#include <bits/stdc++.h>

using namespace std;
#define speed() ios_base::sync_with_stdio(false);cin.tie(0)
void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n), p(n);
    for(int i = 0; i < n;i++) 
        cin >> a[i];

    sort(a.rbegin(), a.rend());
    p[0] = a[0];
    for(int i = 1; i < n;i++) 
        p[i] = p[i - 1] + a[i];
    
    while(q--) {
        int x; cin >> x;
        int l = 0, r = n - 1;
        int ans = -2;
        while(l <= r) {
            int m = (r + l)/2;
            if(p[m] >= x) {
                ans = m;
                r = m - 1;
            }else l = m + 1;
        }
        cout << ans + 1 << "\n";
    }
       
    

}

int main() {
    speed();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}