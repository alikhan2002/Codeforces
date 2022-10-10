#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    if(n < 4 or n&1) {
        cout << "-1\n";
        return;
    }
    long long min_res = INT_MAX, max_res = 0 ;
    long long four = 0, six = 0;
    long long temp = n;
    while(temp % 4 != 0 and temp > 0) {
        temp -= 6;
        four++;
    }
    four += temp/4;
    
    temp = n;
    while(temp %6 !=0 and temp > 0) {
        temp-= 4;
        six++;
    }
    six += temp/6;
   
    cout << min(six, four) << " " <<  max(six, four) << "\n";

}

int main() {
    solve();
}