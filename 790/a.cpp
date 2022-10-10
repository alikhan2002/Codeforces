#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int front = 0, end = 0;
        for(int i = 0; i < 3; i++) {
            front += (s[i] - '0');
            end += (s[s.size() - i - 1] -'0');
        }
        if(front == end) cout <<"YES\n";
        else cout << "NO\n";
        // cout << front << " "<< end << "\n";
    }

}