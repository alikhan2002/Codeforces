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
        double a, b,c ;
        cin >> a >> b >> c;
        a--, b--;
        string s1, s2, s3;
        int res1, res2, res3 = c;
        a = pow(10, a); 
        b = pow(10, b), c = pow(10,c - 1);
        int aa =a, bb =b;
        // a = int(a), b = int(b);
        // cout << b << "\n";
        // int t = min(a,b), k = max(a,b);
        // if
        while(true) {
            s1 = to_string(__gcd(aa, bb));

            if(sz(s1) == res3) {
                cout << aa << " "<< bb <<"\n";
                break;
            }
            aa += c;
        }



    }

    int main() {
        int t;
        cin >> t;
        while(t--) {
            solve();
        }
    }