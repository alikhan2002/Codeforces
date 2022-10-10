        #include <bits/stdc++.h>
        #include <numeric>

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
        const int N = 2e5;
        void solve() {
            int n;
            cin >> n;
            vector<int> a(n);
            for(int i = 0; i < n;i++) cin >> a[i];
            if(n == 1){
                cout <<"0\n";
                return;
            }   
            vector<int> check = a;
            sort(all(check));
            if(a == check) {
                cout <<"0\n";
                return;
            }
            vector<pair<int,int>> res;
            res.pb({1, n});
            if((a[0] + a[n - 1])%2)
                a[n - 1] = a[0];
            else
                a[0]  = a[n - 1];
            
            int even = a[0]%2;
            for(int i = 1; i < n- 1; i++) {
                if(even ==0) {  
                    if(a[i]%2) {
                        res.pb({1, i+1});
                    }else
                        res.pb({i + 1, n});
                }else {
                    if(a[i]%2==0)
                        res.pb({1, i+1});
                    else res.pb({i + 1, n});
                }
            }
            cout << res.size()<<"\n";
            for(auto i: res)
                cout << i.first <<" " << i.second<<"\n";
            // cout <<"\n";
        }    

        int main() {
            ios::sync_with_stdio(false);
            cin.tie(0); cout.tie(0);
            int t;
            cin >> t;
            while(t--) 
                solve();
            
        }