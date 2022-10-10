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
    map<string, int> mp;
    vector<string> ss;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ss.push_back(s);
        mp[s]++;
    }
    for(int i = 0; i < ss.size(); i++) {
        bool ans = false;
        for(int j = 0; j < ss[i].size() - 1; j++) {
            string a = ss[i].substr(0, j + 1); 
            string b = ss[i].substr(j + 1,ss[i].size() - j - 1);
            if(mp[a] and mp[b]) {
                ans = true;
                break;
            }
        }
        cout << ans << "";
    }
    cout << "\n";

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}