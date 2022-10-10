#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        if(n <= 3 or n&1!=0) {
            cout << "-1\n";
            continue;
        }
        long long wheel4 = 0, wheel6 = 0, count4 = 0, count6 = 0;
        long long temp = n;
        while(n %6!=0) {
            n-=4;
            count4++;
        }
        wheel6 = n /6;
        n = temp;
        while(n%4 != 0) {
            n-= 6;
            count6++;
        }
        wheel4 = n/4;
        wheel4 += count6;
        wheel6+= count4;
        if(wheel4 == 0 or wheel6 == 0) {
            int res = max(wheel4, wheel6);
            cout << res << "\n";
        }else cout << wheel6 << " " << wheel4 <<'\n';


    }

}