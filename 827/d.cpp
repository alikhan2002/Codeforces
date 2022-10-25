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
    void solve() {
        int n;
        cin >> n;
        vector<int> v(n);
        rep(i, n) cin >> v[i];
        if(v[n - 1] == 1) {
            cout << 2 * n <<"\n";
            return;
        }
        vector<int> odd;
        vector<int> even;
        map<int, int> mp;
        for(int i =0; i < n; i++) {
            if(v[i] & 1 ) odd.pb(v[i]);
            else if(!(v[i] & 1) ) mp[v[i]]++,even.pb(v[i]);
        }
        // for(int i = 0; i < sz(odd);i++) cout << odd[i] << " ";
        // cout <<"\n";
        // for(int i = 0; i < sz(even);i++) cout << even[i] << " ";
        // cout <<"\n";


        if(!sz(odd)) {
            cout <<"-1\n";
            return;
        }
        reverse(all(odd));
        reverse(all(even));
        // for(int i = 0; i < sz(odd);i++) cout << odd[i] << " ";
        // cout <<"\n";
        // for(int i = 0; i < sz(even);i++) cout << even[i] << " ";
        // cout <<"\n";
        int flag = 0, flag1 = 0, temp= 0, temp1 = 0;
        

        for(int i = 0; i < sz(odd) - 1; i++) {
            if(odd[i]%odd[i + 1] != 0) {
                temp = odd[i];
                temp1 = odd[i + 1];
                break;
            }
            if(odd[i+1] == 1) {
                temp = odd[i];
                temp1 = odd[i + 1];
                break;
            }
        }
        bool br = false;
        for(int i =0; i < sz(odd); i++) {
            for(int j  = 0; j < sz(even); j++) {
                // cout << even[j] % odd[i] << "\n";
                if(even[j] % odd[i] !=0 or odd[i] == 1) {
                    flag = even[j];
                    flag1 = odd[i];
                    br = true;
                    break;
                }
            }
            if(br) break;
        }

    
        // cout << temp <<" "<< temp1 <<" "<< flag<<" "<< flag1 <<"\n";
        int res = 0;
        int ind1 = -1, ind2 = 0;
        // reverse(all(v));
        for(int i = n - 1; i >= 0 ;i--) {
            if(v[i] == flag) ind1 = max(i + 1, ind1);
            if(v[i] == flag1) ind2 = max(i + 1, ind2);
        }
        int index1 = -1, index2 = 0;
        for(int i = n - 1; i >= 0 ;i--) {
            if(v[i] == temp) index1 = max(i + 1, index1);
            if(v[i] == temp1) index2 = max(i + 1, index2);
        }
        // cout << index1 << " "<< index2 <<"\n";
        cout << max(ind1 + ind2, index1 + index2) << "\n";

    }
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }