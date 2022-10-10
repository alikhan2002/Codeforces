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
        vi v(n + 1);
        map<int,int> mp;
        for(int i = 1; i <= n ;i++) {
            cin >> v[i];
            // mp[i]++;
        }

        sort(all(v));   
        // reverse(all(v));
        bool ok = true;
        for(int i = 1; i <= n; i++) {
            // if(v[i] != i) {
                // int k = 2;
                while(v[i] > n or mp[v[i]])
                    v[i] /= 2;
            // }
            if(v[i] > 0) mp[v[i]] = 1;
            else ok = false;
        }
        // for(int i = 1; i <= n; i++) {
        //     cout << v[i] << " \n"[i==n];
        // }
        cout << (ok ? "YES\n" : "NO\n");
    }   

    int main() {
        cin.tie(0);
        ios::sync_with_stdio(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }