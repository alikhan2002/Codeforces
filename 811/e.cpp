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
    int n; cin >> n;
    vi a(n);
    bool five = false;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]%5==0) five= true;
        a[i] += a[i]%10;
    }
    // rep(i, n) cout << a[i] << " \n"[i == n-  1];
    if(five) {
        cout << (*(max_element(all(a))) == *(min_element(all(a)))?"YES\n":"NO\n");
        // cout << *(max_element(all(a))) << " "<< *(min_element(all(a)))<< "\n";
        return;
    }else {
        bool ok1 = false, ok2 = false;
        for(int i = 0; i < n; i++) {
            while(a[i] % 20 != 2) {
                a[i] = a[i] + a[i]%10;
                // cout << a[i] << " ";
                if(a[i] % 20 == 12) {
                    ok2 = true; 
                    break;
                }
                if(a[i]%20 == 2) ok1 = true;
            }
            // cout << "\n";
            while(a[i]%20 != 12) {
                a[i] += a[i]%10;
                if(a[i]%20 == 2) {
                    ok1 = true;
                    break;
                }
                if(a[i]%20 == 12) ok2 = true; 
            }
        }
            cout << (ok1 & ok2 ? "NO\n" :"YES\n");
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}