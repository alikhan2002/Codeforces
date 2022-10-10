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
        vi v(n);
        map<int, int> mp;
        rep(i, n) {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(all(v));
        for(int i = 1; i <= n /2; i++) {
            cout << v[i] <<" "<< v[0] << "\n";
        }
    }
    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }