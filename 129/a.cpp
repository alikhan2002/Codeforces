#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >>v[i]; 
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i]; 
   
    int alice = *max_element(v.begin(), v.end());
    int bob = *max_element(b.begin(), b.end());

    if(alice >= bob) cout << "Alice\n";
    else cout << "Bob\n";
    
    if(bob >= alice) cout << "Bob\n";
    else cout << "Alice\n";


}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
}