#include <bits/stdc++.h>

using namespace std;

#define ll long long
void solve() {
    int n;
    cin >> n;
    string s, t, a, b;
    cin >> s;
    cin >> t;
    a = s, b = t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s!=t) {
        cout << "-1\n";
    }else {
        s= a, t= b;
        int res = 0;
        reverse(s.begin(), s.end());
        reverse(t.begin(), t.end());
        while(s != t) {
            s += s[0];
            s.erase(0, 1);
            res++;
            // cout << s <<" \n";
        }
        cout << res<<"\n";
        
    }

}

int main() {
        solve();
    
}