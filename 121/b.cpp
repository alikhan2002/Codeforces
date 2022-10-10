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
        string s;
        cin >> s;
        bool ok = false;
        for(int i = sz(s) - 2; i >= 0; i--) {
            int x = int(s[i] - '0') + int(s[i + 1] - '0');
            if(x > 9) {
                s.replace(i, 2, to_string(x));
                ok =true;
                break;
            }
        }
        if(ok) cout << s << "\n";
        else {
            int x = int(s[0] - '0') + int(s[1] - '0');
            s.replace(0, 2, to_string(x));
            cout << s << "\n";
        }
    }
    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }