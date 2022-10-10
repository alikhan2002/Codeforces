#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector
using namespace std;
int main () {
    int myints[] = {10,30,30,10,10, 20, 20, 20};
    std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20
    sort(v.begin(), v.end());
    vector<int> :: iterator low, up;
    low = lower_bound(v.begin(), v.end(), 20);
    up = upper_bound(v.begin(), v.end(), 20);
    cout << *low << "\n";
    cout << *up <<"\n";
    cout << (low - v.begin()) << "\n";
  return 0;
}