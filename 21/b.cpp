#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        vector<int> v;
        int res = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int k = 0, e = n - 1;
        while(a[k] == 0 and k < n) k++;
        while(a[e] == 0 and e >= 0 ) e--;
        if(k == n - 1 and n!=1 or e == -1) {
            cout << "0\n";
            continue;
        }else{
            res++;              
            for(int i = k; i <= e; i++) {
                if(a[i] == 0) {
                    res++;
                    break;
                }
            }
        }
        cout << res << "\n";


        
        
    }
}