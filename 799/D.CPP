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
    string s;
    cin >> s;
    int n;
    cin >> n;
    int res = 0;
    map<int,int> mp;
    int minutes, x = stoi(s.substr(0, 2)), y = stoi(s.substr(3,2));
    minutes = x * 60 + y; 
    int temp = minutes;
    // cout << x <<" " << y << "\n";
    for(int i = 0; i < 1440; i++) {
        if(mp[temp]) break;
        mp[temp]++;
        int h = temp/60, m = temp % 60;
        string a = to_string(h), b = to_string(m);
        if(m < 10) {
            b.insert(0, 1, '0');
        }
        if(h < 10) {
            a.insert(0,1,'0');
        }
        // cout << a << " " << b << "\n";
        if(a[0] == b[1] and a[1] == b[0]) res++;
        temp += n; 
        temp %= 1440;
    }
    cout << res <<"\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}