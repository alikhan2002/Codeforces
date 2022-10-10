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
        ll n, k, b,s;
        cin >> n >> k >> b >> s;
        vector<ll> v(n);
        if((b + 1) * k < s)
            v[0] = (b+1) *(k) - 1;
        else v[0] = b * k;
        ll temp = s - b * k;
        ll rem = temp % k;
        // cout << temp<<"w\n";
        ll t = temp / k;
        // cout << t<<"f\n";
        ll res1 = v[0], res2 = 0;
        for(int i = 1; i < n; i++) {
            if(s - res1 > 0) {
                v[i] = (s - res1)%k;
                if(v[i] == 0 and s - res1>=0) v[i] = k - 1;
            }
            res1 += v[i];

        }
        res1= 0, res2= 0;
        bool ok1 = true, ok2 = true;
        for(int i = 0;i < n; i++) {
            res1 += v[i];
            res2+= v[i]/k;
        }
        if(res1 != s) ok1 = false;
        if(res2 != b) ok2 = false;    
        if(ok1 and ok2){   
            sort(all(v));
            for(int i = 0; i < n ;i++)
                cout << v[i]<<" ";
            cout <<"\n";
        }
        else cout <<"-1\n";
        // cin
        // for()
    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }