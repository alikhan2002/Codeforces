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
    // const int N = 2e5;
    void solve() {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res ="";
        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == '0') {
                // cout << i <<"\n";
                string temp = ""; 
                temp += s[i - 2];
                temp+= s[i-1];
                // cout << s[i - 2] << "\n";
                // cout << s[i - 2]<<"\n";
                // cout << temp<<"\n";
                int t = stoi(temp);
                char c = t + 'a' - 1;
                res += c;
                // cout << res <<"\n";
                i -=2;
                // continue;
            }else {
                char c = s[i] - '0' + 'a' - 1; 
                // cout << int(c)<<"\n";
                res += c;
            }

        }
        reverse(all(res));
        cout << res <<"\n";
    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }