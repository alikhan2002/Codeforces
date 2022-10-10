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
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<long long>> a(10000, vector<long long> (4));
    vector<long long> v(10000);
    for(int i = 1; i <= n; i++) 
        for(int j = 1; j < 4; j++) cin >> a[i][j]; 

    v[0] = 0;
    v[1] = a[1][1];
    v[2] = min(a[1][1] + a[2][1], a[1][2]);
    for(int i = 3; i <= n; i++) {
        v[i] = min(v[i - 1] + a[i][1],min(v[i - 2] + a[i - 1][2], v[i - 3] + a[i - 2][3]));
    }
    cout << v[n];
}