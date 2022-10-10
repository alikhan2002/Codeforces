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
    int n, k;
    cin >> n >> k;
    if(!(n & 1)) cout << (k % n != 0 ? k %n: n)<< "\n";
    else {
        // int e = k /(n / 2);
        k--;
        int ans =(k + k/(n / 2))%n;
        cout << ans + 1 << "\n";
    }

}   

int main() {
    int t;
    cin >> t;
    while(t--) 
        solve();
    
}