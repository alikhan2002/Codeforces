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
        vi v(n), a(n), res, temp, maxi(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        maxi[0] = v[0];
        int last = v[0];
        for(int i = 1; i < n; i++) {
            if(last < v[i]) {
                maxi[i] = v[i];
                last = v[i];
            }
            else {
                maxi[i] = last;
            }
        }
        for(int i = n - 1; i >= 0; i--) {
                temp.pb(v[i]);
                if(maxi[i] == v[i]) {
                    reverse(all(temp));
                    res.insert(res.end(), temp.begin(), temp.end());
                    temp.clear();
            }
        }

        rep(i, n) cout << res[i] <<" \n"[i == n - 1];

    }
    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }