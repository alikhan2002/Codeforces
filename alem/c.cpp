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
            ll s, d;
            cin >> s >> d;
            ll lcm = s / d;
            ll a, b;
            bool find = false;
            // cout << g <<"ff\n";
            for(a = 1; a <= sqrt(s); a++) {
                b = (lcm * d)/a;
                // cout << a<<" "<<b<<"\n";
                ll gcd = __gcd(a, b);
                // int lcm = a * b;
                // cout << gcd<<"\n";
                if(gcd == d and a *b == s) {
                    find  = true;
                    break;
                }
            }
            if(find) {
                cout <<a << " "<< b <<"\n";
                 
            }else cout <<"-1\n";
        }   

        int main() {
            ios::sync_with_stdio(false);
            cin.tie(0); cout.tie(0);
            // int t;
            // cin >> t;
            // while(t--) 
                solve();
            
        }