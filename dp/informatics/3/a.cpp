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
#define rep(i,n) for(int i =0; i < n;i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vi v(n);
    rep(i, n) cin >> v[i];
    sort(all(v));

    int res = 0;

    if(!n&1) {
        for(int i = 0; i < n; i +=2) {
            res += v[i + 1] - v[i];
        }
    }else {
        for(int i = 0; i < n; i+= 2) {
            res += v[i + 1] - v[i]; 
        }
        res += v[n - 1] + v[n - 2];
    }
    cout << res <<"\n";
}