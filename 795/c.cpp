#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k; 
    string s, ss="";
    cin >> s;
    string temp = s;
    int sum = 0, ans = INT_MAX;
    int e = k;
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == '1' and s[i + 1] == '0') {
            int j = i;
            while(k and j < n - 1) {
                if(s[j] == '1' and s[j + 1] == '0') {
                    swap(s[j], s[j+1]);
                    k--;
                }
                j++;
            }
        }
    } 
    for(int i = 0; i < n-1;i++) {
        ss += s[i];
        ss += s[i+1];
        sum += stoi(ss);
        ss = "";
    }
    ans = min(ans, sum);
    sum = 0;
    s= temp;
    k = e;
     for(int i = 0; i < n - 1; i++) {
        if(s[i] == '0' and s[i + 1] == '1') {
            int j = i;
            while(k and j >= 0) {

                swap(s[j], s[j+1]);
                k--;
        
                j--;
            }
        }
    } 
    for(int i = 0; i < n-1;i++) {
        ss += s[i];
        ss += s[i+1];
        sum += stoi(ss);
        ss = "";
    }
    ans = min(ans, sum);
    cout << ans << "\n";

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}