#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m, k;
    cin >> n >> m >> k;
    string a, b, c = "";
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool f = false;
    if(a[0] <= b[0]) {
        f = true;
    }
    for(int i = 0; i < n + m and a.size()!=0 and b.size()!=0; i++) {
        int e = 0;
        if(f) {
            int j = 1;
            c += a[0];
            e++;
            while(a[j] <= b[0] and e < k and j < a.size() ) {
                c+= a[j];
                j++;
                e++;
            }
            a.erase(0, e);
            f = false;
        }else {
            int j = 1;
            c+= b[0];
            e++;
            while(a[0] >= b[j] and e < k and j < b.size()) {
                c+= b[j];
                j++;
                e++;
            }
            b.erase(0, e);
            f = true;
        }
    }
    cout << c << "\n";


}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}