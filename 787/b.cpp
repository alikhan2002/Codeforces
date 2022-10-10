#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, a, b, c, x, y;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c >> x >> y;
        if(x <= a) {
            x = 0;
        }else{
            x -= a;
        }
        if(y <= b) {
            y = 0;
        }else{
            y -= b;
        }
        if(x + y - c <= 0 ) {
            cout << "YES\n";
        }else cout << "NO\n";
    }
}