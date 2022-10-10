#include <bits/stdc++.h>

using namespace std;

void solve() {

    long long n, x;
    cin >> n >> x;
    queue<long long> q;
    map<long long, int> dist;
    dist[x] = 0;
    q.push(x);
    while(!q.empty()) {
        long long t = q.front();
        q.pop();
        string s = to_string(t);
        if(s.size() == n) {
            cout << dist[t];
            return;
        }
        // cout << t << "\n";
        for(long long i = 0; i < s.size(); i++) {
            if(s[i] =='0') continue;
            long long v = t * int(s[i] - '0');
            if(!dist.count(v)) {
                dist[v] = dist[t] + 1;
                q.push(v);
            }
        }
        
    } 

    cout << "-1\n";
}

int main() {
   
    solve();
}