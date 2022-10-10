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
    void solve() {
        int n, k, r, c;
        cin >> n >> k >> r >> c;
        r--,c--;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << ((j + i)%k == (r + c)%k ? "X": ".");                
            }
            cout << "\n";
        }
    }   

    // 2 1
    // 2 1
    // 1 + 2  2 + 1

    // 2 + 2  0 + 1

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }