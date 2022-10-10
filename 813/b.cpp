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
    vi v(n + 1);
    for(int i = 1; i <= n; i++) {
        v[i] = i;
    }

    for(int i = n; i > 1 ; i -=2) {
        swap(v[i], v[i - 1]);
    }
    for(int i = 1; i <=n ;i++) {
        cout << v[i] << " \n"[i == n];
    }
}   

int main() {
    int t;
    cin >> t;
    while(t--) 
        solve();
    
}