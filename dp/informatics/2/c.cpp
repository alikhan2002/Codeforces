#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> F(41);
    F[1] = 2;
    F[2] = 3;
    for(int i = 3; i <= n; i++) 
        F[i] = F[i - 1] + F[i - 2] ;
    
    cout << F[n] << "\n";
}