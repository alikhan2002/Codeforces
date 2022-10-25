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
        int n = 8, m = 8;
        vector<vector<char>> v(n, vector<char> (m));
        for(int i = 0; i < n ;i++) {
            for(int j = 0; j <  m ;j++) {
                cin >> v[i][j];
            }
        } 
        bool ok = false;
        for(int i = 0; i < n ;i++) {
            int red = 0;
            for(int j = 0; j <  m ;j++) {
                if(v[i][j] == 'R'){
                    red ++;
                }
            }
            if(red == 8) {
                cout <<"R\n";
                ok = true;
                return;
            }
        } 
        if(!ok) {
            for(int i = 0; i < n; i++) {
                int blue = 0;
                for(int j = 0; j < m ;j++) {
                    if(v[j][i] == 'B') blue++;
                }
            if(blue==8) {
                cout <<"B\n";
                break;
            }
            }
        }
    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }