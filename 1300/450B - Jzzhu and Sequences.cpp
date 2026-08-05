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
    ll x, y, n;
    cin >> x >> y;
    cin >> n;

    ll ans;

    switch (n % 6) {
        case 1:
            ans = x;
            break;
        case 2:
            ans = y;
            break;
        case 3:
            ans = y - x;
            break;
        case 4:
            ans = -x;
            break;
        case 5:
            ans = -y;
            break;
        case 0:
            ans = x - y;
            break;
    }

    ans = (ans % MOD + MOD) % MOD;

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}