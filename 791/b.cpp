        #include <iostream>
        #include "map"

        #define ll long long
        #define fastio ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
        using namespace std;

        int main() {
            fastio
            int n, q;
            cin >> n >> q;
            map<int, int> mp;
            ll  res = 0;
            for(int i = 1; i <= n; i++) {
                int x;
                cin >> x;
                res += x;
                mp[i] = x;
            }
            int last;
            while(q--) {
                int a;
                cin >> a;
                if(a == 1) {
                    int i, x;
                    cin >> i >> x;
                    if(mp.count(i)) {
                        res -= mp[i];
                    }else res -= last;
                    mp[i] = x;
                    res += x;
                    cout << res << "\n";
                }else {
                    int x;
                    cin >> x;
                    res = 1ll*x * n;
                    cout << res << "\n";
                    last = x;
                    mp.clear();
                }

            } 
        }