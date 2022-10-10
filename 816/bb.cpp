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
        ll n, k, b,s;
        cin >> n >> k >> b >> s;
        vector<ll> a(n + 1);
        a[n] = k * b;
        s -= b * k;
        if(s < 0) {
            cout <<"-1\n";
            return;
        }else if(s ==0){
            for(int i =1;i <=n ; i++) {
                cout << a[i]<<" ";
            }
            cout <<"\n";
            return;
        }else {
            if(s >= k -1) {
                a[n] += k - 1;
                s -= k-1;
            }else if(s < k- 1) {
                a[n] += s;
                s = 0;
            }
        }

        for(int i = n -1; i >= 1 and s > 0;i--) {
            if( s>= k-1){
                a[i] = k-1;
                s-= k-1;
            }else if(s < k -1){
                a[i] =s;
                s= 0;
                break;
            }
        }
        if(s!=0) {
            cout << "-1\n";
            return;
        }
        for(int i = 1;i<=n; i++) 
            cout << a[i]<<" ";

        cout <<"\n";

    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }