#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    string temp = s;
    bool first = true;
    for(int j = 0; j < s.size()/2; j++) {
        if(s[j] != s[s.size() - j - 1]) {
            first = false;
            break;
        }
    }
    if(first) {
        cout << "First\n";
        return;
    }

    for(int i = 0; i < temp.size(); i++) {
        bool ok = true;
        s = s.erase(i, 1);
        for(int j = 0; j < s.size()/2; j++) {
            if(s[j] != s[s.size() - j - 1]) {
                ok = false;
                break;
            }
        }
        if(ok) {
            if(!i % 2) {
                cout << "First\n";
            }else cout << "Second\n";
            return;
        }
        s = temp;

    }
}
int main() {
    // int t; 
    // cin >> t;
    
    solve();
    
}