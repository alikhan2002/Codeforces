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
    int n;
    cin >> n;
    vector<int> v(n);
    int d = 2;
    map<int, int> mp;
    mp[1]++;
    cout << d << "\n";
    cout << "1 ";
    for(int i = 2; i <= n/2;i++ ) {
        if(!mp[i]){
            int j = i;
            mp[i]++;
            cout << j << " ";
            while(j < n ) {
                if( j * 2 <= n)
                    cout << j * 2 << " ";
                j *= 2;
                if(j >n) break;
                mp[j]++;
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        if(mp[i] == 0) cout << i << " ";
    }
    cout << '\n';
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}