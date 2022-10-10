#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve() {
    int n;
    std::cin >> n;
    multiset<int> ms;
    std::vector<int> x(n);
    for (int i = 0; i < n; i++) {
        std::cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        int y;
        std::cin >> y;
        x[i] = y - x[i];
        ms.insert(x[i]);
    }
    int res=  0;
    sort(x.begin(), x.end());
    for(int i = 0; i < n ;i++) 
        cout << x[i] << " ";
    cout <<"\n";
    for(int i = 0; i < n; i++) {
        auto it = ms.lower_bound(-x[i]);
        if(it != ms.end()) {
            int ind =it-ms.begin();
            if(ind != i)
                res++;
            cout << *it <<"\n";
            ms.erase(it);
            // n--;
        }
    }
    cout << res <<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}