#include <iostream>


#include <vector>
#include <bits/stdc++.h>

using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> v(n), pos, neg, zero;

    for(auto& x: v) {
        cin >> x;
        // cout << x << " ";
        if(x > 0) pos.push_back(x);
        if(x < 0) neg.push_back(x);
        if(zero.size() < 2 and x == 0) zero.push_back(x);
    }
    if(pos.size() > 2 or neg.size() > 2) {
        cout << "NO\n";
        return;
    }
    for(int x: pos) 
        zero.push_back(x);

    for(int y: neg)
        zero.push_back(y);
    // for(int x: zero) {
    //     // cout << x << " ";
    // }
    // // cout << '\n';
    bool res;
    // cout << zero.size();
    for(int i = 0; i < zero.size(); i++) {
        for(int j = i + 1; j < zero.size(); j++) {
            for(int k = j + 1; k < zero.size(); k++) {
                res = false;
                for(int l = 0; l < zero.size(); l++) {
                    if(zero[i] + zero[k] + zero[j] == zero[l]) {
                        res = true;
                        break;
                    }
                }
                if(!res) {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) 
        solve();
}