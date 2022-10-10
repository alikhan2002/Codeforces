#include <bits/stdc++.h>

using namespace std;

#define ll long long
void solve() {
    int n, k;
    cin >> n >> k;
    vector<char> v(k);
    string s;
    cin >> s;
    ll res = 0;

    for(int i = 0; i < k; i++) 
        cin >> v[i];
    
    int e = 0;
    for(int i = 0; i < n; i++) {
        if (std::find(v.begin(), v.end(), s[i]) == v.end()) {
            res += (1ll*e*(e+1))/2;
            e = 0;
            continue;
        }
        e++;
        if(e != 0 and i == s.size() - 1){
            res += (1ll*e*(e+1))/2;

        }

    }
    cout << res << "\n";
}

int main() {
    solve();
    
}