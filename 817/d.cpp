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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> v(sz(s));
        vector<ll> maxi(sz(s));
        for(ll i = 0; i < sz(s); i++) {
            if(s[i] == 'L') v[i] = i;
            else v[i] = n - i - 1;
            maxi[i] = max(i, n - i - 1);
        }
        ll temp = 0;
        ll mx = 0;
        for(int i = 0; i < sz(s); i++) {
            // v[i] = max(n - i - 1, i )
            temp += v[i];
            mx += maxi[i];
        }
        // sort(all(v));
        vector<ll> dif;
        for(int i = 0; i < sz(s); i++) {
            if(v[i]!=maxi[i]) dif.push_back(maxi[i] - v[i]);
        }
        sort(all(dif), greater<ll>());
        int k = 0; 
        for(int i = 0; i < sz(s); i++) {
            if(k < sz(dif)) temp += dif[k];
            // temp += dif[k];
            k++;
            cout << temp <<" ";
        }
        cout << "\n";
        // cout << temp<<"\n";
        // cout << mx <<"\n";
        // rep(i, sz(s)) cout << v[i] << " ";
        // cout << '\n';
        // rep(i, sz(maxi)) cout << maxi[i]<<" ";
    }   

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }