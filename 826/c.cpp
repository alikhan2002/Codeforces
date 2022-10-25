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
            vector<int> v(n);
            int sm = 0;
            rep(i , n) cin >> v[i], sm += v[i];
            int ind = -1;
            int res = -1;
            int temp = 0;
            vector<int> dif, last;
            rep(i, n) {
                bool ok = true;
                int summa = 0;
                int l = i;
                temp += v[i];
                for(int j = i + 1; j < n; j++) {
                    summa += v[j];
                    if(summa == temp) {
                        ind = j - l;
                        l = j;
                        dif.pb(ind);
                        summa = 0;
                    }
                    if(summa > temp) {
                        ok = false;
                        break;
                    }
                }
            }
            if(!sz(dif)) cout << n <<"\n";
            else {
                for(int i = 0; i < sz(dif); i++) 
                    if(n%dif[i] == 0)
                        res = max(dif[i], res);

                cout <<res<<"\n";
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