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
            char c;
            cin >> n >> c;
            string s;
            cin >> s;
            if(c == 'g'){
                cout << "0\n";
                return;
            }
            s += s;
            int ans = 0;
            int last = 2*n;
            for(int i = n * 2 - 1;  i>= 0; i--) {
                if(s[i] == 'g') last = i;
                if(i < n and s[i] == c) ans = max(ans, last - i);
            }
            cout << ans <<"\n";
        }   

        int main() {
            ios::sync_with_stdio(false);
            cin.tie(0); cout.tie(0);
            int t;
            cin >> t;
            while(t--) 
                solve();
            
        }