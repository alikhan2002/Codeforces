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
    int n;
    cin >> n;
    string s;
    cin >> s;
    // cout << sz(s) <<"\n";
    vector<int>res;
    if(s[0] != '9') {
        for(int i = 0; i < s.size(); i++) {
            int dif = ('9' - s[i]);
            res.push_back(dif);
        }
    }else {
        reverse(all(s));
        bool rem = false;
        int dif;
        for(int i = 0; i < s.size(); i++) {
            int  dif = ('1' - s[i]);
            if(dif < 0) {
                if(!rem) dif += 10;
                else dif += 9;
                rem = true;
            }else {
                if(rem and dif == 0) dif += 9;
                else if(rem and dif == 1) {
                    dif = 0;
                    rem = false;
                }
            }
            res.push_back(dif);
        }
        reverse(all(res));
    }

    
    for(int i = 0; i < n; i++) 
        cout << res[i];
    cout << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}