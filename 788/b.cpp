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
        string s;
        cin >> s;
        int m;
        cin >> m;
        vector<char> c(m);
        map<char,int> mp;
        for(int i = 0; i < m; i++) {
            cin >> c[i];
            mp[c[i]] = 1;
        }
        int ind = - 1, res = 0;
        for(int i = 0; i < n ;i++) 
            if(mp[s[i]]) ind = i;
        
        for(int i = ind - 1; i >= 0; i--) {
            int j = i;
            while(j > 0 and !mp[s[j]])j--;

            res = max(res, i - j + 1);
            i = j;
        }
        cout << res<<"\n";
    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }