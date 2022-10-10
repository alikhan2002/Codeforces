#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    n--;
    int C[n + 1][n +1];
    for(int i = 0;i <= n; i++) {
        C[i][0] = 1;
        C[i][i] = 1;
        for(int j = 1; j < i; j++) {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
     for(int i = 0;i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << C[i][j] << " ";
        }
        cout << '\n';
    }
}