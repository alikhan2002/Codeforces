#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; 
    cin >> n;
    string s = to_string(n);
    if(s.size() == 2) {
        cout << s[1] <<'\n';
    }else {
        cout << *min_element(s.begin(), s.end()) <<"\n";
    }
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}