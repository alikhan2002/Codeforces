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
    vector<ll> v(n);
    rep(i, n) 
    {
        cin >> v[i];
    }
    sort(all(v));
    if(n == 1) {
        cout << "YES\n";
        return;
    }
    bool ans = true, one = false, zero = false;

    for(int i = 0; i < n; i++) {
        if(v[i] == 1) one = true;
        if(v[i] == 0) zero = true;
        if(one and zero) {
            ans = false;
            break;
        }
        if(one) {
            if(v[i] == v[i - 1] + 1);
        }

    }
    if(!one)
        cout << "YES\n";    
    else {
        for(int i = 1; i < n; i++) {
            if(v[i] == v[i - 1] + 1) {
                ans = false;
                break;
            }
        }
        cout << (ans ? "YES\n" : "NO\n");
    }    
}   

int main() {
    int t;
    cin >> t;
    while(t--) 
        solve();
    
}