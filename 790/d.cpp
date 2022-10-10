#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < m; j++) 
                cin >> v[i][j];
        int l, r;
        int res = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                res = 0;
                res += v[i][j];
                l = i + 1, r = j + 1;
                while(l < n and r < m) {
                    res += v[l++][r++];
                }   
                l = i - 1, r = j - 1;
                while(l >= 0 and r >= 0) {
                    res += v[l--][r--];
                } 
                l = i - 1, r = j + 1;
                while(l >= 0 and r < m) {
                    res += v[l--][r++];
                } 
                l = i + 1, r = j - 1;
                while(l < n and r >= 0) {
                    res += v[l++][r--];
                } 
                ans = max(res, ans);
            }
        }
        cout << ans << "\n";
        
    }

}