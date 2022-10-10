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
        vector<char> color(n);
        rep(i, n) {
            cin >> color[i];
        }
        if(n == 1 and color[0] != 'W') {
            cout << "NO\n";
            return;
        }else if(n == 1 and color[0] == 'W') {
            cout << "YES\n";
            return;
        }
        map<char, int> mp;
        vector<pair<int, int>> p;
        rep(i, n) {
            if(i != n - 1 and color[i] != 'W' ) {
                mp[color[i]]++;
            }else {
                if(i == n - 1)
                    mp[color[i]]++;
                if(mp['R'] or mp['B'])
                    p.pb({mp['R'], mp['B']});
                mp['R'] = 0, mp['B'] = 0;
            }
        }
        if(!sz(p)) {
            cout << "YES\n";
            return;
        }
        for(auto it: p) {
            // cout << it.first << " " << it.second<< "\n";
            if(it.first == 0 or it.second == 0) {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";

    }
    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }