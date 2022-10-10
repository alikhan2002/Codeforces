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
    cin >> n ;
    vector<int> a(n);
    map<int, int> mp;
    rep(i, n) {
        cin >> a[i];
        mp[a[i]] = i;
    }
    int i = 0, j = 1, k = 2;
    int res = 0;
    bool ans = true;
    sort(a.rbegin(), a.rend());
    while(i < n) {
        cout << a[i] << " ";
        i++;
    }
    cout << "\n\n";
    // while(i < n - 2) {
    //     j = i + 1;
    //     while(j < n - 1) {
    //         k = j + 1;
    //         // res = 0;
    //         while(k < n) {
    //             res += a[i] + a[j] + a[k];
    //             // cout << res << " ";
    //             bool found = false;
    //             res = 0;
    //             k++;
    //             for(int x = 0; x < n; x++) {
    //                 if(a[x] == res) found = true;
    //             }
    //             ans &= found;
    //         }
           
    //         j++;
    //     }
    //     i++;
    // }
    // cout << (ans ? "YES\n": "NO\n");
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}