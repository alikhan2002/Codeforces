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
        vector<int> v(n);
        map<int, int> mp;
        rep(i, n) {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(all(v));
        int type1 = 0, type2 = 0, type3 = 0;
        for(int i = 0; i < n/3; i++) {
            if(mp[1] and mp[2] and mp[4]) {
                type1++;
                mp[1]--, mp[2]--, mp[4]--;
            }else if(mp[1] and mp[2] and mp[6]){
                mp[1]--, mp[2]--, mp[6]--;
                type2++;  
            }else if(mp[1] and mp[3] and mp[6]){
                mp[1]--, mp[3]--, mp[6]--;
                type3++;
            }
        }     
        for(int i = 0; i < n; i++) {
            if(mp[v[i]]) {
                cout<<"-1\n";
                return;
            }
        }   
        for(int i = 0; i < type1; i++) {
            cout << "1 2 4\n";
        }
        for(int i = 0; i < type2; i++) {
            cout << "1 2 6\n";
        }
        for(int i = 0; i < type3; i++) {
            cout << "1 3 6\n";
        }
        
    }
    int main() {
        solve();
    }