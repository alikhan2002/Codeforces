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
        ll a,b,c,d;
        cin >> a>> b >> c>> d;
        // if(a/b == c/d) {
        //     cout <<"0\n";
        //     return;
        // }
        if(a*d == b*c ){
            cout <<"0\n";
            return;
        }
        if(a * d == 0 or b*c == 0) {
            cout <<"1\n";
            return;
        }
        if(a * d >= b*c) {
            if((a*d)%(b*c) !=0 ) cout <<"2\n";
            else cout << "1\n";
        }else{
            if((b*c)%(d*a) !=0 ) cout <<"2\n";
            else cout << "1\n";
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