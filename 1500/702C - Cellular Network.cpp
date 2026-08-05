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
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

vector<ll> a, b;
ll n, m;

bool checker(ll r)
{
    ll i = 0;
    ll j = 0;

    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= r)
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return i == n;
    return false;
}

void solve()
{
    cin >> n >> m;

    a.resize(n);
    b.resize(m);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    ll low = 0;
    ll high = 2e9;
    ll ans = high;

    while (low <= high)
    {
        ll mid = (high + low) / 2;

        if (checker(mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans << '\n';
}

int main()
{
    fast_io

        int t = 1;

    while (t--)
    {
        solve();
    }

    return 0;
}