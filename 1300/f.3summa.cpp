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
    vector<int> b;
    rep(i, n){
        cin >> v[i];
        v[i] %= 10;
        mp[v[i]]++;
        if(mp[v[i]] < 4) b.push_back(v[i]);
    }
    sort(all(b));
    n = b.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                int check = b[i] + b[j] + b[k];
                if(check %10 == 3) {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";

}

int main() {
    int t;
    cin >> t;
    while(t--) 
        solve();
    
}