#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int k = n;
        int ans = 5616548;
        vector<string> v;
        while(n--) {
            string s;
            cin >> s;
            if (std::find(v.begin(), v.end(), s) != v.end()) {
                ans = 0;
            }
            v.push_back(s);

        }
        if(ans == 0) {
            cout << ans << "\n";
            continue;
        }
        int res;
        for(int i = 0; i < k; i++) {
             for(int j = i + 1; j < k; j++) {
                res = 0;
                for(int e = 0; e < m; e++) {
                    res += abs((v[j][e] -'0') - (v[i][e] - '0'));
                }
                if(res > 0)
                    ans = min(ans, res);
                // cout << res << " asf\n";
            }
            
            
        }
        cout << ans << "\n";

    }

}