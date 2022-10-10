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
#define speed() ios_base::sync_with_stdio(false);cin.tie(0)

using namespace std;

const int N = 1e5 + 5;

void solve() {
   int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int L = n;
    int R = -1;
    for (int i = 0; i < n - 1; i++) {
      if (a[i] == a[i + 1]) {
        L = min(L, i);
        R = max(R, i);
      }
    }
    // cout << L <<" " << R << "\n";
    if (L >= R) {
      cout << 0 << '\n';
    } else {
      cout << max(1, R - L - 1) << '\n';
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