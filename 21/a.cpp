#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, z;
        cin >> n >> z;
        int a[n], res = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            res = max(res, z | a[i]);
            // z = a[i] & (z|a[i]);
        }

        cout << res << "\n";
        
    }
}