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
        string a, b;
        cin >> a >> b;
        map<char,int> mp, mm, t;
        for(int i =0 ; i < a.size(); i++) t[a[i]]++;
        for(int i =0 ; i < b.size(); i++) mm[b[i]]++;
        int f = 0, s =0;
        if(t['S'] and mm['S']) {
            if(t['X'] > mm['X']) {
                cout << "<\n";
            }else if(t['X']  < mm['X']) {
                cout << ">\n";
            }else cout <<"=\n";
        }else if(t['L'] and mm['M'] )cout << ">\n";
        else if(t['M'] and mm['L']) cout <<"<\n";
        else if(t['L'] and mm['L']) {
            if(t['X'] > mm['X']) {
                cout << ">\n";
            }else if(t['X']  <mm['X']) {
                cout << "<\n";
            }else cout <<"=\n";
        }else if(t['M'] and mm['S']) cout <<">\n";
        else if(t['S'] and mm['M']) cout <<"<\n";
        else if(t['S'] and mm['L']) cout <<"<\n";
        else if(t['L'] and mm['S']) cout <<">\n";

    
        else cout <<"=\n";

    }
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while(t--) 
            solve();
        
    }