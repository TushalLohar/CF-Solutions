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
    const int N = 2e5 + 10;
    int n, a[N], b[N], v[N], ans;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i], v[i] = 0;
    if (a[n] == b[n])
    {
        cout << n << "\n";
        return;
    }
    ans = 0;
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] == b[i] || a[i] == a[i + 1] || b[i] == b[i + 1] || v[a[i]] || v[b[i]])
        {
            ans = i;
            break;
        }
        v[a[i + 1]] = v[b[i + 1]] = 1;
    }
    cout << ans << "\n";
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