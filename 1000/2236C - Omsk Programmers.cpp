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

void solve()
{
    ll a, b, x;
    cin >> a >> b >> x;
    ll ans = LLONG_MAX;

    vector<pair<ll, ll>> num1, num2;
    ll value1 = a, count = 0;
    while (true)
    {
        num1.push_back({value1, count});
        if (value1 == 0)
            break;
        value1 /= x;
        count++;
    }
    ll value2 = b;
    count = 0;
    while (true)
    {
        num2.push_back({value2, count});
        if (value2 == 0)
            break;
        value2 /= x;
        count++;
    }

    for (auto pair : num1)
    {
        for (auto pair2 : num2)
        {
            ll value_1 = pair.first;
            ll operation_1 = pair.second;

            ll value_2 = pair2.first;
            ll operation_2 = pair2.second;

            ans = min(ans, operation_1 + operation_2 + abs(value_1 - value_2));
        }
    }
    cout << ans << endl;
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