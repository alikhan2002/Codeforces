#include <bits/stdc++.h> 
  
using namespace std; 
 
void solution(){ 
    int n, m, x, y; 
    cin>>n>>m>>x>>y; 
 
    char a[n][m]; 
    for(int i=0; i<n; i++){ 
        for(int j=0; j<m; j++){ 
            cin>>a[i][j]; 
        } 
    } 
    int ans = 0; 
    if(m < 2) { 
        int res = 0; 
        for(int i=0; i<n; i++){ 
        // int doub = 1, sin = 0; 
            for(int j=0; j<m; j++){ 
                if(a[i][j] =='.') res++; 
            } 
        } 
        cout << res*x <<"\n"; 
         
    }else { 
        if(x*2 <= y) {
            for(int i = 0; i < n ;i++) {
                int temp = 0;
                for(int j = 0; j < m; j++) {
                    if(a[i][j] == '.') temp++;
                }
                ans += temp*x;
            }
            cout << ans <<"\n";
        }else {
            for(int i=0; i<n; i++){ 
                int doub = 0, sin = 0; 
                for(int j=0; j<m - 1; j++){ 
                    if(a[i][j] == '.' and a[i][j+1] =='.') { 
                        doub++;
                        sin +=2;
                        j++;
                        // ...*....
                    }else if(a[i][j] == '.') sin++;
                    if(j == m - 2 and a[i][j + 1] =='.')sin++;
                    // if(a[i][j] == '.') sin++; 
                } 
                    // cout << sin <<"\n";
                ans += doub * y + (sin - 2*doub)*x;
            } 
            cout << ans <<"\n";
        }
    }     
    // if(x*2 < y){ 
    //     cout<<sin * x; 
    // }else{ 
    //     cout<<doub*y + (sin - doub*2) * x; 
    // } 
    // cout<<"\n"; 
} 
  
int main() 
{ 
    int n; cin>>n; 
 
    while(n--){ 
        solution(); 
    } 
  
    return 0; 
}