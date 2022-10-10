#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    // if(n!=2) {
    //     cout << "1\n";
    // }else cout << "0\n";
    queue<long long> q;
    q.push(1);
    map<long long, int> dist;
    while(!q.empty()) {
        long long t = q.front();
        q.pop();
        cout << t <<"\n";
        if(t == n) break;
        if(t > n) continue;
        if(!dist[t + 1]) {
            q.push(t + 1);
            dist[t + 1] = dist[t] + 1;
        }
        if(!dist[t * 2]) {
            q.push(t * 2);
            dist[t*2]=  dist[t] +1;
        }
        // if(!dist[t * 2 + 1]) {
        //     q.push(t *2 + 1);
        //     dist[t*2 + 1]=  dist[t] +1;
        // }
    }
    cout << dist[n]<<"d\n";
    cout << (dist[n]%2 ? "0\n":"1\n");
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
}