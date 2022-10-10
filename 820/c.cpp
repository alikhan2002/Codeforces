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
        int res = 0;
        map<char, vector<int>> mp;
        int n = s.size();
        for(int i = 1; i < n-1 ;i++) 
            mp[s[i]].pb(i + 1);
            
        if(s[0] < s[n - 1] ){
            for(char i = s[0]; i <= s[n - 1]; i++) {
                res += mp[i].size();
            }

            cout << s[n - 1] - s[0] << " "<< res + 2 <<'\n';
            cout <<"1 ";
            for(char i = s[0]; i <= s[n - 1]; i++) 
                for(int j: mp[i]) 
                    cout<< j<<" "; 
                
                cout << n <<"\n";
            
        }else {
            for(char i = s[0]; i >= s[n - 1]; i--) {
                res += mp[i].size();
            }

            cout << s[0] - s[n - 1] << " "<< res + 2 <<'\n';
            cout <<"1 ";
            for(char i = s[0]; i >= s[n - 1]; i--) 
                for(int j: mp[i]) 
                    cout<< j<<" "; 
                
                cout << n <<"\n";
            

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