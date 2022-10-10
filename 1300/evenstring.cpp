#include <bits/stdc++.h>

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

void solve() {

    string s;
    cin >> s;
    map<char, int> mp;
    int m = 0, n = sz(s);
    vector<bool> prev(26, false);
    for(auto &i: s) {
        if(prev[i - 'a']) {
            m += 2;
            for(int j = 0; j < 26; j++) {
                prev[j] = false;
            }
        }else prev[i - 'a'] = true;
    }
    cout << n - m << "\n";
}   

int main() {
    int t;
    cin >> t;
    while(t--) 
        solve();
    
}