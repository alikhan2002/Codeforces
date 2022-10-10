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
    int n, k;
    cin >> n;
    long long res = 0;
    vector<vector<int>> a(2, vector<int> (n));
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int t = 0;
    int i = 0, j = 0;

    while(t < n) {
        if(j + 1 < n and i + 1 < 2  and a[i + 1][j] >= a[i][j + 1]) {
            res+= a[i + 1][j] - a[i][j];
            i++;
            t++;
        }else if(j + 1 < n){
            res+= a[i][j + 1]- a[i][j];
            j++;
            t++;
        }
        if(i + 1 < 2 and j - 1 >= 0 and  a[i + 1][j] >= a[i][j - 1]) {
            res+= a[i+1][j]- a[i][j];
            i++;
            t++;
        }else if(j - 1 >= 0) {
            res+= a[i][j - 1]- a[i][j];
            j--;
            t++;
        }
        if(i - 1 >= 0 and j + 1 < n and a[i - 1][j] >= a[i][j + 1]) {
            res+= a[i - 1][j]- a[i][j];
            i--;
            t++;
        }else if( j+ 1 < n){
            res += a[i][j + 1]- a[i][j];
            t++;
            j++;
        } 
        if(j - 1 >= 0 and i - 1 >= 0 and a[i - 1][j] >= a[i][j - 1]) {
            res+= a[i - 1][j]- a[i][j];
            i--;
            t++;
        }else if(j - 1 >= 0){
            res += a[i][j - 1]- a[i][j];
            t++;
            j--;
        } 
    }
    cout << res++ << "\n";



}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}