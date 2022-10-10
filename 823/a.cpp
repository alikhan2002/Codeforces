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
            int n, c;
            cin >> n >> c;
            vi v(n);
            map<int,int> mp;
            rep(i, n){
                cin >> v[i];
                mp[v[i]]++;
            }
            int res = 0;
            for(auto it: mp) {
                // cout << it.first <<" "<< it.second<<"\n";
                if(mp[it.first] >= c){
                    res += c;
                }else res+= mp[it.first];
            }
            cout << res <<"\n";

        }   

        int main() {
            ios::sync_with_stdio(false);
            cin.tie(0); cout.tie(0);
            int t;
            cin >> t;
            while(t--) 
                solve();
            
        }