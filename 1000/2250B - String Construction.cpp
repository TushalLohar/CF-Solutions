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
    ll n, k;
    cin >> n >> k;
    ll m = n - k;
    if (m == 1)
    {
        cout << -1 << endl;
        return;
    }
    ll zero_runs = (m + 1) / 2;
    ll one_runs = m / 2;
    ll zeroTotal = zero_runs;
    ll oneTotal = one_runs;
    ll extra = n - m;
    ll extra_zero = 0, extra_one = 0;
    vector<ll> zero_size(zero_runs, 1);
    vector<ll> one_size(one_runs, 1);

    while (extra--)
    {
        if (zeroTotal <= oneTotal)
        {
            zeroTotal++;
            extra_zero++;
        }
        else
        {
            oneTotal++;
            extra_one++;
        }
    }
    if (zero_runs)
    {
        zero_size[0] += extra_zero;
    }
    if (one_runs)
    {
        one_size[0] += extra_one;
    }

    string ans;
    ans.reserve(n);
    ll z = 0, o = 0;
    for (ll i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            ans += string(zero_size[z++], '0');
        }
        else
        {
            ans += string(one_size[o++], '1');
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