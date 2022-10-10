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
        string s;
        cin >> s;
        string res = "";
        map<char, char> mp;
        // mp['a'] = 1;
        vector<char> chr(26);
        for(char a = 'a'; a <='z'; a++) {
            chr[a - 97] = a;
        }
        int j = 0, i = 0;
        if(s[i] == chr[j] ) {
            j++;
            // while(s[i] >= chr[j]) j++;
            // i++;
        }
            while(i < n) {
                if(!mp.count(s[i])) {
                    // cout << s[i] << " " << chr[j%26] << "\n";
                    // cout << j <<" \n";
                    mp[s[i]] = chr[j%26];
                    res += chr[j%26];
                    j++;
                }else res += mp[s[i]];
                i++;
            }

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