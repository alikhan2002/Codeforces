#include <iostream>
#include "map"

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        map<int, int> mp;
        int n;
        cin >> n;
        bool flag = false;
        int res = -1;
        while(n--) {
            int x;
            cin >> x;
            mp[x]++;
            if(!flag){
                if(mp[x] == 3) {
                    res = x;
                    flag = true;
                }
            }
        }

        cout << res << "\n";


    
    }

}