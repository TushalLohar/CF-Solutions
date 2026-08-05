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

const int MOD = 998244353;
const ll INF = 1e18;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> nums(n);
    ll res = 0;
    ll count = 0;
    for (auto &x : nums)
    {
        cin >> x;
        res ^= x;
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (res == 0)
    {
        cout << 1 << endl;
        return;
    }

    ll msb = 31 - __builtin_clz(res);

    for (int y : nums)
    {
        if ((y >> msb) & 1)
        {
            count++;
        }
    }
    cout << count % MOD << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}