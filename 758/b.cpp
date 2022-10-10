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
        int n, a, b;
        cin >> n >> a >> b;
        vi v(n + 1);
        if( n - 2 < a + b or abs(a - b) > 1) {
            cout << "-1\n";
            return;
        }
        if(!a and !b) {
            for(int i = 1; i <=n; i++) {
                cout << i <<" \n"[i == n];
            }
            return;
        }
        vi pref, suf;
        for(int i = 1; i <= n /2;i++) {
            pref.pb(i);
        } 
        for(int i = n/2 + 1; i<=n; i++) {
            suf.pb(i);
        }
        vi res;
        int e = 0, k = 0;
        
        if(a > b){
            reverse(all(suf));
            res.pb(pref[0]);
            e++;
            for(int i = 0; i < n; i++) {
                if(a){
                    res.pb(suf[k]);
                    k++;
                    a--;
                }
                 if(b) {
                    res.pb(pref[e]);
                    e++;
                    b--;
                }
                if(!b){
                    reverse(pref.begin() + e, pref.end());
                    while(k < sz(suf)){
                        res.pb(suf[k]);
                        k++;
                    }
                     while(e < sz(pref)){
                        res.pb(pref[e]);
                        e++;
                    }

                   
                }
            }
        }else if(a < b) {
            reverse(all(pref));
            res.pb(suf[0]);
            k++;
            for(int i = 0; i < n; i++) {
                if(b) {
                    res.pb(pref[e]);
                    e++;
                    b--;
                }
                if(a){
                    res.pb(suf[k]);
                    k++;
                    a--;
                }
                if(!a){
                    while(e < sz(pref)){
                        res.pb(pref[e]);
                        e++;
                    }
                     while(k < sz(suf)){
                        res.pb(suf[k]);
                        k++;
                    }
                }
            }
        }else {
            // reverse(all(pref));
            reverse(all(suf));
            res.pb(pref[0]);
            e++;
            for(int i = 0; i < n; i++) {
                if(a){
                    res.pb(suf[k]);
                    k++;
                    a--;
                }
                 if(b) {
                    res.pb(pref[e]);
                    e++;
                    b--;
                }
                if(!b){
                    reverse(suf.begin() + k, suf.end());
                     while(e < sz(pref)){
                        res.pb(pref[e]);
                        e++;
                    }
                    while(k < sz(suf)){
                        res.pb(suf[k]);
                        k++;
                    }

                   
                }
            }

        }
        int mx = 0, mn = 0;
        for(int i = 0; i < n; i++){
            if(i and i < n - 1) {
                mx += (res[i] > res[i - 1] & res[i] > res[i + 1] ? 1: 0);
                mn += (res[i] < res[i - 1] && res[i] < res[i + 1] ? 1: 0);
                
            }
            cout << res[i] <<" \n"[i == n- 1];
        }
        // cout << mx << " " << mn <<"\n";
    }   

    int main() {
        cin.tie(0);
        ios::sync_with_stdio(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }