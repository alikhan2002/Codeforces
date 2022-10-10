#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n >= 1900)  cout << "Division 1\n";
        if(n >= 1600 and n <=1899)  cout << "Division 2\n";
        if(n >= 1400 and n <1600)  cout << "Division 3\n";
        if(n < 1400)  cout << "Division 4\n";
    }
}