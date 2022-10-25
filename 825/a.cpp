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
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        int res = 0;
        map<int,int>mp, mm;
        for(int i = 0; i < n; i++) {
            if(a[i]!=b[i]) res++;
        }
        if(a==b) {
            cout << "0\n";
            return;
        }
        sort(all(a));
        sort(all(b));
        int temp = 0;
        for(int i = 0; i < n ;i++) {
            if(a[i]!=b[i]) {
                temp++;
            }
        }
        if(temp == 0) {
            cout <<"1\n";
        }
        else if(res == temp) {
            cout << res <<"\n";
        }else cout << res - temp << "\n";
        // cout << res - temp<<"\n";   
    }   


    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }