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
    vi v(n);
    map<int, int> mp;
    rep(i, n) {
        cin >> v[i];
        mp[v[i]] = 1;
    }
    int k = 0;
    int res = 0;
    int l =  0;
    for(int i = 1; i < n; i++) {
        if(!mp[v[i]]) {
            k = 0;
            for(; l < i; l++) {
                if(mp[v[l]]) k++;
                mp[v[l]]= 0;
            }
            res += k;
        }
        if(v[i] < v[i - 1]) {
            k = 0;
            for(; l < i; l++) {
                if(mp[v[l]]) k++;
                mp[v[l]]= 0;
            }
            res += k;
        }
    }
    cout << res << "\n";
}   

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) 
        solve();
    
}