#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s,t;
    cin >> s>>t;
    if(s==t) {
        cout << "YES\n";
        return;
    }else if(s!=t and n==1) {
        cout << "NO\n";
        return;
    }
    map<char, int> first, second;
    for(int i = 0;i < n;i++) 
        first[s[i]]++, second[t[i]]++;
    
    
    if(first['b'] != second['b']) {
        cout <<"NO\n";
        return;
    }else{
        int j = 0;
        for(int i = 0; i< n ;i++) {
            if(s[i] =='b') continue;

            while(t[j] == 'b') j++;

            if(s[i] != t[j] or (s[i] == 'a' and i > j ) or (s[i] == 'c' and i < j)) { 
                cout << "NO\n";
                return;
            }
            j++;
            
        }
        cout << "YES\n";
    }
    
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
}