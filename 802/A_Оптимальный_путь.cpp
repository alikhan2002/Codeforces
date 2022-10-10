#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, m;
        cin >> n >> m;

        cout << m * (m - 1) /2 + m*(n * (n + 1)/2)  << "\n";
    }
}