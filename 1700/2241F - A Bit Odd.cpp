#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <list>
#include <numeric>
#include <iomanip>
#include <climits>
#include <cstring>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

#define pb push_back
#define ff first
#define ss second

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool even_zero = true;
    bool even_one = true;
    int zeros_after = 0;
    int ones_before = 0;

    
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            zeros_after++;
        } else {
            if (zeros_after % 2 != 0) {
                even_zero = false;
            }
        }
    }

  
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ones_before++;
        } else {
            if (ones_before % 2 != 0) {
                even_one = false;
            }
        }
    }

    string ans;
    if (even_zero && even_one) {
        ans = "Bob";
    } else {
        ans = "Alice";
    }
    
    cout << ans <<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
