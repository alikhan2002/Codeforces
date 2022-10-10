#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve() {
    ll n,k, sum = 0;
    cin >> n >> k;
   
    vector<int> v(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> v[i];
        sum += v[i];
        v[i] += i + 1;
    }
    if(n==k) {
        cout << "0\n";
        return;
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i = 0; i < k; i++) 
        sum -= v[i];
    
    for(int i = 0; i < k; i++) {
        sum += n;
        sum -= i;
    }
    cout << sum << "\n";
 }

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}