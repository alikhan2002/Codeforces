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

    void solve() {
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        vector <vector<int>> v(n, vector<int> (m));
        // v.resize(col,vector<int>(row));

        //v = {{1,2,3}, {4,5,6}, {7,8,9}}; 

        /** input from use **/
        for(int i = 0; i < n ;i++) cin >> a[i];
        int one = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                v[i][j] = (a[i][j] - '0');
                one += v[i][j];
            }
        }

        int cnt = 0;
        int mn = INT_MAX;
        for(int i=0; i<n - 1; i++)
        {
            for(int j=0; j<m - 1; j++)
            { 
                cnt = v[i][j] + v[i + 1][j] + v[i][j +1] + v[i +1][j + 1];
                if(!cnt) continue;
                mn = min(mn, max(1, cnt - 1));
            }
        }
       if(!one) cout <<"0\n";
       else {
        cout << one - mn + 1<<"\n";
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