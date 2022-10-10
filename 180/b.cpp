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
        ll t, e_x, e_y;
        ll x ,y;
        cin >> t >> x >> y >> e_x >> e_y;
        char c;
        for(int i = 1; i <= t; i++) {
            cin >> c;
            if(c == 'W' and x > e_x) x--;
            if(c == 'E' and x < e_x) x++;
            if(c=='N' and y < e_y) y++;
            if(c=='S' and y > e_y) y--;
            if(x == e_x and y == e_y) {
                cout << i <<"\n";
                return;
            }
        }
        cout << "-1\n";
    }
    int main() {
        solve();
    }