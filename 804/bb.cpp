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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int> (m));
    v[0][0] = 1;
    v[0][1] = 0;
    v[1][0] = 0;
    vector<vector<bool>> used(n, vector<bool> (m, false));
    if(n == m) {
        for(int i = 0; i < n; i+=2) {
            v[i][0] = 1;
        }
        for(int i = 0; i < m; i+=2) {
            v[0][i] = 1;
        }
        for(int i = n - 1; i >= 0; i-=2)
            v[i][m-1] = 1;
        // cout << v[n -1][m-1];
        for(int i = m - 1; i >= 0; i-=2)
            v[n - 1][i] = 1;
        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < m; j++) {
        //         cout << v[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // return;
        bool up = false, down =false, right= true, left = false;
        used[0][0] = true;
        int i = 0, j =0;
        while(used[n/2][m/2 - 1] == false) {
            // cout << "3\n";
            // cout << i << " "<< j << "df\n";
            if(right) {
                j = j + 1;
                // cout <<j << "sf\n";
                while(j < m  and !used[i][j]) {
                    if(!v[i][j - 1] and !v[i][j + 1]) v[i + 1][j] = 1;
                    else if(v[i][j-1] and v[i][j+1]) v[i + 1][j] = 0;
                    used[i][j] = true;
                    j++;
                    // cout << "right\n";
                }
                j--;
                right = false; 
                down = true;
            }
            if(down) {
                // i = 1;
                i = i + 1;
                while(i < n  and !used[i][j]) {
                    if(!v[i - 1][j] and !v[i + 1][j]) v[i][j - 1] = 1;
                    else if(v[i - 1][j] and v[i + 1][j]) v[i][j - 1] = 0;
                    used[i][j] = true;
                    i++;
                    // cout << "down: " << i<<" "<< j << "\n";
                }
                i--;
                down = false; 
                left = true;
            }
            if(left) {
                j = j - 1;
                while(j >= 0 and !used[i][j]) {
                    if(!v[i][j - 1] and !v[i][j + 1]) v[i - 1][j] = 1;
                    else if(v[i][j-1] and v[i][j+1]) v[i - 1][j] = 0;
                    used[i][j] = true;
                    // cout << "left\n";
                    j--;
                }
                j++;
                left = false; 
                up = true;
            }
            if(up) {
                i = i - 1;
                while(i >= 0 and !used[i][j]) {
                    if(!v[i - 1][j] and !v[i + 1][j]) v[i][j + 1] = 1;
                    else if(v[i - 1][j] and v[i + 1][j]) v[i][j + 1] = 0;
                    used[i][j] = true;
                    // cout << "up\n";
                    i--;
                }
                i++;
                up = false; 
                right = true;
            }

        }

    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}