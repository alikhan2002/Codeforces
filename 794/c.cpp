#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if(n &1) 
    {
        cout << "NO\n";
        return;
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    for(int i = 0; i < n/2; i++) {
        ans.push_back(v[i]);
        ans.push_back(v[i+n/2]);
    }
    ans.push_back(v[0]);
   
    bool ok = true;
    for(int i = 1; i < ans.size() - 1; i += 2) {
        if((ans[i] <= ans[i-1] || ans[i] <= ans[i+1])) {
            ok = false;
            break;
        }
    }
    // cout << ans.size() << " a\n";
    if(ok) {
        if(ans[0] < ans[1] and ans[0] < ans[n - 1] or(ans[0] > ans[1] and ans[0] > ans[n - 1])) {
            cout << "YES\n";
            for(int i = 0; i < n; i++) 
                cout << ans[i] << " ";
            
         }
    }else cout << "NO\n";
    
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}