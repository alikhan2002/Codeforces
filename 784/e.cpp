#include <iostream>
#include "map"
#include "vector"

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long res = 0;
        map<char, int> mp, mm;
        map<string, int> st;
        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            int x = mp[s[0]] + mm[s[1]] - 2 * st[s];
            // отнимаем 2 * st[s], потому что оно этот стринг имеют столько же пар, как его предыдущий.
            /*
            Eg:
            ab
            ac 
            ad
            ab
            

            ab: ac, ad пары, 2 шт. 
            также ac, ad тоже пары с нижним ab, то есть они повторяются
            ab ac
            ab ad

            и 
            ac ab
            ad ab

            всего 4 пары
            тогда res += 3 + 1 - 2 * 1
            ровно 2 пары повторяются.
            */
            res += x;
            mp[s[0]]++, mm[s[1]]++, st[s]++;

        }
        cout << res << "\n";
        
    }

}