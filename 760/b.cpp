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
        string res = "", last, s;
        for(int i = 0; i < n - 2 ;i++) {
            cin >> s;
            if(!i) {
                res += s;
                last = s;
            }else {
                if(s[0] == last[1]) {
                    res += s[1];
                }else res += s;
                last = s;
            }
        }
        
        cout << (n == sz(res) ? res : res + s[1]) << '\n';
    }
    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }