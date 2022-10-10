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
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    int j = 0;
    for(int i = 0; i < n ;i++){
        while(a[i] > b[j]) j++;
        cout << b[j] - a[i] << " ";
    }
    cout << '\n';
    j = 0;
    for(int i = 0; i < n; i++) {
        j = max(i, j); 
        // cout << j <<" ";
        while(j < n - 1 and a[j + 1] <= b[j]) j++;
        cout << b[j] - a[i] << " ";
    //    cout << j <<" ";
    }
    cout << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}