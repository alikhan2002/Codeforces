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
        int n;
        cin >> n;
        if(n&1) {
            int a = (n + 1)/2 ;
            if((a & 1)) {
                cout << a << " " << n - a - 1 << " "<<1 <<"\n"; 
            }else cout << a + 1<< " " << n - a -2 << " " <<1 << "\n";
        }else {
            cout << n / 2 << " " << n / 2 - 1<< " " << 1 << "\n";
        }     

    }   

    int main() {
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }