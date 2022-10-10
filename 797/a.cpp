#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int k = n/3, s =k , t =k, f = k;

    if(n%3 == 2) {        
        s += n%3/2;
        f += n%3/2;
    }else f+= n %3;
    // cout << s  << ' ' << f << ' ' << t << "\n";
    while(f <= s or s <= t and t > 0) {
        f++;
        t--;
    }
    cout << s  << ' ' << f << ' ' << t << "\n";

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}