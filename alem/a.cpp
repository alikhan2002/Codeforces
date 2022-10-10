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
long convert(string s) 
{ 
    // Initialize a variable 
    int num = 0; 
    int n = s.length(); 

    // Iterate till length of the string 
    for (int i = 0; i < n; i++) 

        // Subtract 48 from the current digit 
        num = num * 10 + (int(s[i]) - 48); 

    // Print the answer 
    return num;
}
void solve() {
    int n;
    cin >> n;
    int sum = 0;

    bool ok = false;
    if(n % 60==0) {
        cout <<"YES\n";
        return;
    }
    if(n < 60) {
        cout <<"NO\n";
        return;

    }
    if (n < 1000) {
        string s = to_string(n);
        string temp = "";
        int zeros = 0;
        for(int i = 0; i < s.size(); i++) 
            if(s[i] != '0') temp+=s[i];
            else zeros++;
        int x = convert(temp);
        double d = double(x)/60 * pow(10, zeros);
        int a = int(d);
        if(a *60 == d * 60) cout <<"YES\n";
        else cout <<"NO\n";
        return;
    }
    int k = n;
    while(k > 0){
        int x = k %10;
        sum += x;
        if(x == 0){
            ok = true;
        }
        k /= 10;
    }
    // cout << sum <<"\n";
    if(sum%3 == 0 and ok) 
        cout << "YES\n";
    else
        cout <<"NO\n";

}   

// 60 6
// 120 3
// 180 9
// 240 6
// 300 3
// 330 6
// 360 9
// 420 6
// 480 12
// 540 9
// 600 6
// 660 12
// 720 9
// 780 15
// 840 12
// 900 9
// 960 15
// 1020 3
int main() {
ios::sync_with_stdio(false);
cin.tie(0); cout.tie(0);
int t;
// cin >> t;
// while(t--) 
    solve();

}