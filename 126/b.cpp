#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n;i++)  cin >> a[i];
    
    int mod = 32768;
    map<int, int> dist;
    queue<int> q;
    dist[0] = 0;
    q.push(0);
    while(!q.empty()) {
        int top = q.front();
        q.pop();
        int first = (top-1 + mod) %mod;
        if(!dist.count(first)) {
            dist[first] = dist[top] + 1;
            q.push(first);
        }
        if(top %2 == 0) {
            int second = top/2;
            if(!dist.count(second)) {
                dist[second] = dist[top] + 1;
                q.push(second);
            }
            second += mod/2;
            if(!dist.count(second)) {
                dist[second] = dist[top] + 1;
                q.push(second);
            }
        }
    }
    for(int i = 0; i < n;i++)  cout << dist[a[i]] << " ";
}

int main() {

   solve();
}