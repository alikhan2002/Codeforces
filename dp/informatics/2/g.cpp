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
#define rep(i,n) for(int i =0; i < n;i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vi v(1000000);
    string s = "";
    for(int i = 2; i <= n; i++) {
        int c = v[i - 1];
        if (i % 3 == 0) { c = min(c, v[i / 3]);s+= "3"; }
        if (i % 2 == 0) { c = min(c, v[i / 2]); s+= "2";}
        v[i] = c + 1;
    }
    cout <<s <<"\n";
}