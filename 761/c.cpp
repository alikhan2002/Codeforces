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
        vi v;
        set<int> st;
        for(int i = 1; i <= n; i++)st.insert(i);
        bool ok = true;
        rep(i, n) {
            int x;
            cin >> x;
            if(st.find(x) != st.end()) st.erase(x);
            else v.pb(x);
        }
        sort(all(v));
        // reverse(all(v));
        // for(int i = 0; i < sz(a); i++) {
            
        // }
        for(int i = 0;i < sz(v); i++) {
            auto it = st.begin();
            // it--;
            int temp = *it;
            if(temp <= (v[i] - 1) /2) st.erase(it);
            else {
                ok = false;
                break;
            }
        }
        cout << (ok ? sz(v): -1) <<"\n";

    }   

    int main() {
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }