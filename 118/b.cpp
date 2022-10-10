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
        vi v(n);
        map<int, int> mp;
        rep(i, n) {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(all(v));
        // reverse(all(v));
        int l = 0, r = 1;
        vector<pair<int,int>> res;  
        while(r < n) {
            if(mp[v[r]%v[l]] == 0 and v[l] != v[r]) {
                if(sz(res) < n / 2) {
                    res.pb({ v[r], v[l]});
                    // mp[v[r]%v[l]]++;
                    r++;
                }
                else break;
            }else l++, r++;

        }
        for(auto i: res) {
            cout << i.first<< " "<< i.second<<"\n";
        }
    }
    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }