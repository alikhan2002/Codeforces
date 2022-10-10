#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    string one = "", two="";

    for(int i = 0;i < n; i++) {
        if(s[i] != 'b') one += s[i];
        if(t[i] != 'b') two += t[i];
    }
    cout << one << "\n" << two << "\n";
}


int main() {
    int t; 
    cin >> t; 
    while(t--) solve();
}