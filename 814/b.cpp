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
        int n, k;
        cin >> n >> k;
        vector<pair<int,int>> v;

        // (a+k)*b %4 == 0
        bool ok = true;
        for(int i = 1; i <= n; i += 2) {
            if(((i + k)*(i +1))%4==0) {
                v.pb({i, i+1});
            }else if(((i + 1 + k)*(i)%4==0)){
                v.pb({i + 1, i});
            }else{
                ok = false;
                break;
            }
        }
        if(ok) {
            cout <<"YES\n";
            for(auto it: v) {
                cout << it.first << " " << it.second << "\n";
            }
        }else cout << "NO\n";
    }    

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }