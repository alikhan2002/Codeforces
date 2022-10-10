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

    int k = 1;
    void solve() {
        int n;
        char c;
        cin >> n >> c;
        vector<int> res;
        string s;
        cin >> s;
        bool ok = true;
        for(auto x: s) {
            if(x != c) ok = false;
        }


        if(!ok) {
            ok = true;
            if(s[n - 1] == c) {
                res.pb(n);
            }else{
                ok = false;
                for(int i = n - 1; i >= 0; i--) {
                    if(s[i] == c) {
                        if(i + 1 > n /2 and i !=0) {
                            res.pb(i +1);
                            ok = true;
                            break;
                        }                 
                    }
                }
                if(!ok) {
                    res.pb(n);
                    res.pb(n - 1);
                }
            }
        }

        cout << sz(res)<<"\n";
        for(int i = 0; i < sz(res); i++) {
            cout << res[i] <<" \n"[i == sz(res) - 1];
        }
        // cout << "\n";
        

    }   

    int main() {
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }