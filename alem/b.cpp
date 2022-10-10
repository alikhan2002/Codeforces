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
        const int N = 2e5;
        long convert(string s) 
        { 
            // Initialize a variable 
            int num = 0; 
            int n = s.length(); 
        
            // Iterate till length of the string 
            for (int i = 0; i < n; i++) 
        
                // Subtract 48 from the current digit 
                num = num * 10 + (int(s[i]) - 48); 
        
            // Print the answer 
            // cout << num;
            return num; 
        } 
        
        void solve() {
            int n;
            cin >> n;
            ll x = 1;
            while(n--) {
                vector<char> s(2);
                // for(int i =0 ;  i < 4 ;i++)
                //     cin >> s[i];
                int e, t;
                cin >> s[0] >> e >> s[1] >> t;
                // cout << s.size()<<"\n";
                ll a = x , b = x;
                if(s[0] == '*'){
                    a *= e;
                }
                else if(s[0] == '/')
                    a /= e;
                else if(s[0] == '+')
                    a += e;
                else if(s[0] == '-')
                    a -= e;

                    
                if(s[1] == '*'){
                    b *=t;
                }
                else if(s[1] == '/')
                    b /=t;
                else if(s[1] == '+')
                    b +=t;
                else if(s[1] == '-')
                    b -=t;
                x = max(a, b);
                // cout << x <<'\n';

            }
            cout << x <<"\n";
        }   

        int main() {
            ios::sync_with_stdio(false);
            cin.tie(0); cout.tie(0);
            // int t;
            // cin >> t;
            // while(t--) 
                solve();
            
        }