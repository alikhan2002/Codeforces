#include <bits/stdc++.h>

using namespace std;

int main() {
        long long n, q;
        cin >> n >> q;
        vector<long long> v(n);
        for(int i = 0; i < n; i++) 
            cin >> v[i];
        while(q--) {
            int e;
            cin >> e;
            long long res = 0;
            if(e == 1) {
                long long x, y;
                cin >> x >> y;
                v[--x] = y;
                for(int i = 0; i < n; i++) 
                    res += v[i];
                cout << res << "\n";
            }
            if(e == 2) {  
                long long x; 
                cin >> x;
                for(int i = 0; i < n; i++) 
                    v[i] = x;
                for(int i = 0; i < n; i++) 
                    res += v[i];
                cout << res << "\n";
                
            }

    }

}