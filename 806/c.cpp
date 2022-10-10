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
    for(int i = 0; i < n; i++) 
        cin >> v[i];
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for(int j = 0; j < x; j++) {
            char c;
            cin >> c;
            if(c == 'D') {
                v[i]++;
                if(v[i] == 10) v[i] = 0;
            }else {
                v[i]--;
                if(v[i] == -1) v[i] = 9;
            }
        }


    }
    for(int i = 0; i < n; i++) 
        cout << v[i] << " ";
    cout << '\n';

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}