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
            string s;
            cin >> s;
            int n = s.size();
            reverse(all(s));
            int k = 57;
            vector<int> l(10, 0);
            for(int i = 0; i < n; i++) {
                if(s[i] <= char(k)) {
                    l[s[i]-'0']++;
                    k = s[i];
                }else {
                    if(s[i]!= '9') {
                        l[s[i]-'0'+1]++;
                    }else l[9]++;
                }
            }
            for(int i = 0; i < 10; i++) {
                while(l[i]--) {
                    cout << i;
                }
            }
            cout <<'\n';

        }   

        int main() {
            ios::sync_with_stdio(false);
            cin.tie(0); cout.tie(0);
            int t;
            cin >> t;
            while(t--) 
                solve();
            
        }