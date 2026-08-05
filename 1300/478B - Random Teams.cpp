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
    ll n, m;
    cin >> n >> m;

    ll bigTeam = n - m + 1;
    ll mx = bigTeam * (bigTeam - 1) / 2;

    ll small = n / m;
    ll large = small + 1;
    ll extra = n % m;

    ll mn = (m - extra) * (small * (small - 1) / 2)
          + extra * (large * (large - 1) / 2);

    cout << mn << " " << mx << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}