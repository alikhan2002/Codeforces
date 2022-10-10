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
        vector<string> v[3];
        map<string, int> mp, map;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                string s;
                cin >> s;
                if(!mp[s]){
                    mp[s]++;
                    v[i].push_back(s);
                }
                // mp[s]++;
                map[s]++;
            }    
            mp.clear();
        }
        vector<int> res(3,0);
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < v[i].size(); j++) {
                // cout << v[i][j]<<" ";
                if(map[v[i][j]] == 1) res[i]+=3;
                if(map[v[i][j]] == 2) res[i]++;
            }
            // cout << '\n';
        }
        for(int i = 0; i < 3; i++){
            cout << res[i]<<" \n"[i == 2];
        }
        // for(auto it: map){

        // }
    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }