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
    long long n;
        cin >> n;

        long long lo = 1, hi = 1000000000LL;
        long long best = 1;

        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if (mid % 2 == 0) mid--;

            __int128 c = ((__int128)mid * mid + 1) / 2;

            if (c <= n) {
                best = mid;
                lo = mid + 2;
            } else {
                hi = mid - 2;
            }
        }

        if (best < 3)
            cout << 0 << '\n';
        else
            cout << (best - 1) / 2 << '\n';
    

    
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