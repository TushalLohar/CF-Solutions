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

    ll temp = n;
    ll a = -1, b = -1;

    for (ll i = 2; i * i <= temp; i++) {
        if (temp % i == 0) {
            a = i;
            temp /= i;
            break;
        }
    }

    if (a == -1) {
        cout << "NO\n";
        return;
    }

    for (ll i = 2; i * i <= temp; i++) {
        if (temp % i == 0 && i != a) {
            b = i;
            temp /= i;
            break;
        }
    }

    if (b == -1 || temp == a || temp == b || temp == 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        cout << a << " " << b << " " << temp << "\n";
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