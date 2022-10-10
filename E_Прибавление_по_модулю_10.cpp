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
    int n; cin >> n;
    vi v(n + 1);
    vi vis(n + 1);
    bool twoOdd = false, twoEven = false, threeOdd = false, threeEven = false;
    bool rem = true, finish = false;
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        // if(v[i]%10 ==0) rem = true;
    }
    sort(all(v));
    vi tens;
    for(int i = 1;i <= n; i++) {
        int x = v[i] % 10;
        if(v[i] %10 !=0 and v[i]%10 !=5) {
            if(x == 1 or x == 2 or x == 4 or x == 8) {
                if((v[i] / 10)%2 == 0)
                    twoEven = true;
                else twoOdd = true;
            }else  {
                if((v[i] / 10)%2 == 0)
                    threeEven = true;
                else threeOdd = true;
            }
            rem = false;
        }else if(rem) {
            tens.push_back(v[i]);
        } else if(!rem) finish = true;
    }
    if(finish) {
        cout << "No\n";
        return;
    }
    if(rem) {
        bool res = true;
        for(int i = 0; i < tens.size() - 1; i++) {
            if((tens[i + 1] %tens[i]) == 0 or (tens[i + 1] % tens[i]) == tens[i]) continue;
            else {
                res = false;
                break;
            }
        }
        cout << (res ? "Yes\n" : "No\n");
        return;
    }
    if((twoEven and threeOdd) and !threeEven and !twoOdd) {
        cout << "Yes\n";
    }else if(!twoEven and !threeOdd and threeEven and twoOdd) {
        cout << "Yes\n";
    }else if(twoEven and !threeOdd and !threeEven and !twoOdd) 
        cout << "Yes\n";
    else if(!twoEven and threeOdd and !threeEven and !twoOdd) 
        cout << "Yes\n";
    else cout << "No\n";
    
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}