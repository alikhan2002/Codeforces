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
    int res = 0;
    if(n % 2 == 0 and n % 3 == 0) {
        cout << n / 3 << "\n";
    }else if(n%3==0) cout << n / 3 << "\n";
    else if(n == 1) cout << "2\n";
    else {
        int  k = n;
        res += k / 3;
        // if(k % 3== 1) res++;
        // if(k%3 == 2) res++;
        res++;
        cout << res << "\n";
    }

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}