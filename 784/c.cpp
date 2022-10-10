#include <iostream>
#include "map"
#include "vector"

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> odd;
        vector<int> even;
        int n;
        cin >> n;
        int c = 1;
        while(n--) {
            int x;
            cin >> x;
            if(c%2==1) {
                odd.push_back(x);
            }else even.push_back(x);
            c++;
        }
        int e1 = 0;
        for(int i = 0; i < odd.size(); i++) {
            e1 += odd[i]%2;
        }
        int e2 = 0;
        for(int i = 0; i < even.size(); i++) {
            e2 += even[i]%2;
        }
        
        if(!e1 and !e2) {
            cout << "YES\n";
            continue;
        }
        if(e1 == odd.size() and e2 == even.size()){
            cout << "YES\n";
            continue;
        }
        if(e1 == 0 and e2 == even.size()){
            cout << "YES\n";
            continue;
        }
        if(e1 == odd.size() and e2 == 0){
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }

}