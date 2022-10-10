#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) 
            cin >> v[i][j];
    vector<int> res;
    for(int i = 0; i < n and res.empty(); i++) {
        vector<int> a = v[i];
        sort(a.begin(), a.end());
        for(int j = 0; j < m; j++) {
            if(v[i][j] != a[j]) res.push_back(j);
        }
    }
    if(res.size()==0){
        cout << "1 1\n";
        return;
    }
    if(res.size() > 2) {
        cout << "-1\n";
        return;
    }
    for(int i = 0; i < n; i++) 
        swap(v[i][res[0]], v[i][res[1]]);
    
    for(int i = 0; i < n; i++){ 
        for(int j = 1; j < m; j++) {
            if(v[i][j] < v[i][j - 1]) {
                cout << "-1\n";
                return;
            }
        }
    }
    cout << ++res[0]  << " " << ++res[1]<<'\n';
            
    
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}