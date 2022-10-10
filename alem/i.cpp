#include <bits/stdc++.h>
#include <numeric>

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
const int N = 2e5;
bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    vector<pair<int,int>> v;
    vector<pair<int,int>> speed;
    for(int i = 0; i < n; i++) {
        cin >> a[i]>> b[i];
        speed.pb({b[i], i});
        v.push_back({a[i] + b[i], i});
    }
    map<int,int> mp;
    sort(all(speed));
    cout <<'\n';
    sort(all(v), sortbyCond);
    reverse(all(v));
    reverse(all(speed));
    int res= 0;
    // for(int i = 0; i < n; i++) {
    //     if(!mp[i]){
    //         res += v[i].first;

    // }
    int l = 0, r = 0;
    // cout << res <<'\n';
    res += v[l].first;
    mp[v[l].second]++;
    if(!mp[speed[r].second]) {
        mp[speed[r].second]++;
    }else mp[speed[r + 1].second]++, r++;
    l++, r++;
    for(int i = 0; i < n; i++) {
        for(l; l < n;l++) {
            if(!mp[v[l].second]) {
                res += v[l].first;
                mp[v[l].second]++;
                cout << speed[l].second << "\n";
                break;
            }
        }
        for(r= 0; r < n;r++) {
            if(!mp[speed[r].second]) {
                // res += v[j].first;
                mp[speed[r].second]++;
                break;
            }
        }
    }
    cout << res <<"\n";
    rep(i,n)
        cout << speed[i].first<<" " << speed[i].second + 1<<"\n";
    cout <<"\n";
    rep(i, n) {
        cout << v[i].first << " "<< v[i].second + 1<<"\n";
    }
}   

// 1 
// 4 
// 8 
// 3
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // int t;
    // cin >> t;
    // while(t--) 
        solve();
    
}