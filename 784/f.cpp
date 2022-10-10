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

using namespace std;
void solve() {
    int n;
    cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int res = 0;
    int l = 0, r = n - 1;
    int leftSum = v[l], rightSum = v[r];
    while(l < r) {
        if(leftSum == rightSum) {
            res = l + 1 + n - r;
        }
        if(leftSum <= rightSum) {
            l++;
            leftSum += v[l];
        }else {
            r--;
            rightSum += v[r];
        }
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