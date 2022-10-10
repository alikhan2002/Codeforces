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
    // cin >> a >> b >> c >> d;
    int n;
    n = 8;
    vector<vector<char>> v(n, vector<char>(n));
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> v[i][j];
        }
    }   
    int x= 0, y= 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(v[i][j] =='.') continue;
            if(i == 0 and j == 0) continue;
            if(i== 7 and j == 0) continue;
            if(i == 0 and j == 7) continue;
            if(i == 7 and j == 7) continue;
            if(i-1 >=0 and i + 1 < 8 and j -1 >=0 and j +1 < 8 and v[i - 1][j - 1] == '#' and v[i + 1][j+1] == '#' and v[i+1][j-1] == '#' and v[i-1][j+1]=='#' ) {
                x = i + 1;
                y = j + 1;
                break;
            }
            if(j == 7 and v[i - 1][j - 1] == '#' and v[i + 1][j-1] == '#'   ) {
                x = i + 1;
                y = j + 1;
                break;
            }
            if(j == 0 and v[i + 1][j + 1] == '#' and v[i - 1][j+1] == '#' ) {
                x = i + 1;
                y = j + 1;
                break;
            }
             if(i == 0  and v[i + 1][j -1] == '#' and v[i + 1][j+1] == '#' ) {
                x = i + 1;
                y = j + 1;
                break;
            }
            if(i == 7 and v[i - 1][j - 1] == '#' and v[i - 1][j+1] == '#' ) {
                x = i + 1;
                y = j + 1;
                break;
            }
        }
        
    }     
    cout << x << " " << y << '\n';

    
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}