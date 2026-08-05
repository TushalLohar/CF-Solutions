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
    ll n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << " " << n / 2 << '\n';
        return;
    }

    ll div = -1;

    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            div = i;
            break;
        }
    }

    if (div == -1) {
        cout << 1 << " " << n - 1 << '\n';
    } else {
        ll a = n / div;
        cout << a << " " << n - a << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}