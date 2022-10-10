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

    using namespace std;
    void solve() {
        int n;
        cin >>n;
        vector<int> v(n);
        set<int> s;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            s.insert(v[i]);
        }
        if((n - s.size())%2 == 0) {
            cout << s.size() <<"\n";
        }else cout << s.size() - 1 << "\n";
    }
    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }