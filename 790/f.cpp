#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> mp;
    for(int i = 0; i < n;i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<int> v;

    for(auto it: mp) {
        if(it.second >= k) {
            v.push_back(it.first);
        }
    }
    if(!v.size()) {
        cout << "-1\n";
        return;
    }
    sort(v.begin(), v.end());
    int mx = 0, lans, rans;
    lans = rans = v[0];
    int l = v[0];
    for(int i =1; i < v.size(); i++) {
        if(v[i] - 1 == v[i - 1]) {
            if(v[i] - l > mx) {
                rans = v[i];
                lans = l;
                mx = rans - lans;
            }
            
        }else l = v[i]; 
    }
    cout << lans << " " << rans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}