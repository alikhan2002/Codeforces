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

        bool red = false, blue = false;
        rep(i, n) {
            if(color[i] == 'R') red = true;
            else if(color[i] == 'B') blue = true;
            if(i == n - 1 or color[i] == 'W') {
                if(red != blue) {
                    cout << "NO\n";
                    return;
                }
                red =  blue = false;

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