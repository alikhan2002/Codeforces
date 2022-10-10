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
        ll n,q;
        cin >> n >> q;
        vector<ll> v(n);
        for(int i = 0; i < n;i++) cin >> v[i];
        vector<int> qq(n + 1), b(200100);
        while(q--) {
            int l, r;
            cin >> l>> r;
            qq[l - 1]++;
            qq[r]--;
        }
        for(int i = 0; i < n; i++) {
            cout << qq[i] <<" ";
        }
        cout << "\n";
        for(int i = 1; i < n; i++) {
            qq[i] += qq[i - 1];
        }
        for(int i = 0; i < n; i++) {
            cout << qq[i] <<" ";
        }
        cout << "\n";
        long long res = 0;
        sort(all(v));
        sort(all(qq));
        for(int i = 0;i < n ;i++) {
            // cout << qq[i + 1] << " \n"[i == n];

            res +=(1ll)* qq[i + 1]*v[i];
        }
        cout << res <<"\n";
    }
    int main() {
        solve();
    }