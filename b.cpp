#include <bits/stdc++.h>
using namespace std;


void solve() {
    int x, y;
    cin >> x >> y;
    vector<int> v;
    queue<int> q;
    map<int, bool > mp;
    map<int, int> dist;
    q.push(x);
    dist[x] = 0;
    vector<int> p(200000);
    while(!q.empty()) {
        int t = q.front();
        q.pop();
        if(t == y) break;
        if(!mp[t * 2]) {
            mp[t * 2] = true;
            dist[t*2] = dist[t] + 1;
            p[t * 2] = t;
            q.push(t*2);
        }
        if(!mp[t - 1]) {
            mp[t - 1] = true;
            dist[t - 1] = dist[t] + 1;
            q.push(t - 1);
            p[t - 1] = t;
        }
    }
    cout << dist[y] << '\n';
    if(!dist[y]) return;
    vector<int> res;
    for(int i = y; i != x; i = p[i]) {
        if(p[i] == x) break;
        res.push_back(p[i]);
        // cout << p[i] << " ";
    }
    reverse(res.begin(), res.end());
    for(int i = 0; i < res.size(); i++) cout << res[i] <<" ";
    cout << y <<"\n";

}
int main() {
        solve();

}   