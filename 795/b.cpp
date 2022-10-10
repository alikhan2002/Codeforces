#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n), res;
    map<int, int> mp, temp;
    for(int i =0; i < n;i++) {
        cin >> v[i];
        mp[v[i]]++;
        temp[v[i]] = max(temp[v[i]], i+1);
    }
    for(int i = 0; i < n;i++) {
        if(mp[v[i]] == 1) {
            cout << "-1\n";
            return;
        }
    }
    for(int i = 0; i < n - 1; i++) {
        if(v[i] == v[i+1]) {
            int j = i + 1;
            res.push_back(temp[v[i]]);
            // cout << j << "sf\n";
            while(v[j] == v[i] and j < n ) {
                res.push_back(j);
                j++;
            }
            i = j - 1;
        }
    }
    for(int i = 0; i < n;i++) {
        cout << res[i] << " ";
    }
    cout << '\n';
    
} 

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}