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

const int N = 1e5 + 5;

int ans[N]; 

void recurse(int r) {
	if (r < 0) return;
	int s = sqrt(2*r); 
    s *= s;
	int l = s - r; 
    // cout << l << " "<<r << "a\n";
    recurse(l - 1);
	for (; l <= r; l++, r--) {
		ans[l] = r; ans[r] = l;
	}
}
void solve() {
    int n;
    cin >> n;
    recurse(n-1);
    for(int i = 0; i < n; i++) cout << ans[i] << " \n"[i == n - 1];
    
    
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}