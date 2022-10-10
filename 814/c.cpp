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
        ll n, k, q;
        cin >> n >> q;
        vector<ll> v(n + 1);
        map<ll, int> id, mp;
        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        int temp = v[1];
        // temp = v[1];
        // else temp = v[2];
        for(int i = 2; i <= n ;i++) {
            if(v[i] > temp) {
                temp = v[i];
                mp[v[i]]++;
            }else mp[temp]++;
        }
        int mx = *(max_element(all(v)));
        int ind = 1;
        for(int i = 1; i <= n; i++) {
            if(v[i] == mx) {
                ind = i;
                break;
            }
        }
        // for(int i = 1; i <=n ;i++) {
        //     cout << mp[v[i]]<<" ";
        // }
        // cout << ind <<"\n";
        // cout << "\n";
        while(q--) {
            int i, k;
            cin >> i >> k;
            if(v[i] != mx) {
                if(i - 2 > 0) {
                    if(k - i + 2 >= mp[v[i]]) {
                        cout << mp[v[i]] << "\n";
                    }else if(k - i + 2 <= 0) cout << "0\n";
                    else if(k-i +2 > 0 and k - i + 2 < mp[v[i]]) cout << k - i + 2 <<"\n";
                }else {
                    if(k >= mp[v[i]]) cout << mp[v[i]]<<'\n';
                    else cout << k<<"\n";
                }
                // continue;
            }else {
                if(ind - 2 > 0) {
                    if(k - (ind - 2) >= 0) {
                        cout << k - ind + 2 << "\n";
                    }else cout << "0\n";
                }else cout << k << "\n";
            }
            
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