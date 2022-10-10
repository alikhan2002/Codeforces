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
            int n, x, y;
            cin >> n>> x >> y;
            if(x == 0 and y ==0) {
                cout <<"-1\n";
                return;
            }
            if(x!= 0 and y!=0) {
                cout <<"-1\n";
                return;
            }
            if((n - 1)% (x + y)!= 0) {
                cout <<"-1\n";
                return;
            }
            if(x == 1 or y== 1) {
                int i = 2;
                int k = 0;
                while(k < n - 1) {
                    cout << i <<" ";
                    k++;
                    i++;
                }
                cout <<"\n";
                return;
            }
            int t = 1,k = max(x, y), j = 1, e = 2;
            for(int i =2; i <= n; i += j ) {
                j = 1;
                while(j <= k){
                    cout << t <<" ";
                    j++;
                    e++;
                }
                t= e;
            }
            cout <<"\n";
        }    

        int main() {
            ios::sync_with_stdio(false);
            cin.tie(0); cout.tie(0);
            int t;
            cin >> t;
            while(t--) 
                solve();
            
        }