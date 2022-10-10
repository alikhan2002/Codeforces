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
    vi a(n), b(n);

    for(int i = 0; i < n; i++) cin >>a[i];

    for(int i = 0; i < n; i++) cin >> b[i];

    for(int i = 0; i < n; i++) {
        if(a[i] > b[i]) swap(a[i], b[i]);
    }
    
    // for(int i = 0; i < n; i++) 
    //     cout << a[i] <<" \n"[i == n - 1];

    
    // for(int i = 0; i < n; i++) 
    //     cout << b[i] <<" \n"[i == n - 1];
    cout << (*max_element(all(a))* (*max_element(all(b)))) <<'\n';
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}