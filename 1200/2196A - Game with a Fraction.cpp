#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        long long p, q;
        cin >> p >> q;
        cout << ((3 * p < 2 * q || p >= q) ? "Alice\n" : "Bob\n");
    }
    return 0;
}