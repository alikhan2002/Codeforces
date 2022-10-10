#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int cnt = 0;
        for( int i = 0; i < n; i++ ) 
            cin >> v[i];
        bool ans = true;
        int i = 0;
        while( i < n - 1){
            if(v[i] == 0 and v[i+1] == 0) {
                ans = false;
                break;
            }
            // cout << i << "saf\n";
            if(v[i] >= v[i + 1]) {
                v[i] = v[i]/2;
                cnt++;
                i = -1;
            }
            if(i == n - 2) ans = true;
            i++;
        }
        if(ans) cout << cnt<<"\n";
        else cout << -1<<"\n";
    }
}