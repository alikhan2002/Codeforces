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
    vector<int> v(n);
    map<int, int> mp;
    rep(i, n) {
        cin >> v[i];
        mp[v[i]]++;
    }
    // if(mp[max] == 1) {
    //     cout << "YES\n";
    //     return;
    // }
    int first_max = -1, second_max =-1;
    int maxi = *max_element(all(v));
    bool inc = false, dec = false;
    for(int i = 1; i < n - 1; i++) {
        if(v[i] >= v[i - 1] ) {
            
            while(i < n - 1 and v[i] >= v[i - 1]) i++;
            if(i == n - 1) inc = true;
            while(i < n - 1 and v[i] <= v[i - 1]) i++;
            // cout << i << " ";
            if(i != n - 1 or (v[i] > v[i - 1] and !inc) ) {
                cout << "NO\n";
                return;
            }
        }else {
            dec = true;
            while(i < n - 1 and v[i] <= v[i - 1]) i++;
            // cout << i << " ";
            if(i != n - 1 or v[i] > v[i - 1]) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}