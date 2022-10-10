#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int mini = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(mini > v[i]) mini = v[i];
        }
        int res = 0;
        for(int i = 0; i < n; i++) {
            res += (v[i] - mini);
        }
        cout << res << "\n";
    }

}