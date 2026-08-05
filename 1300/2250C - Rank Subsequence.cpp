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
    int n;
    cin >> n;
    vector<int> l(n + 1), r(n + 1), u(n + 1), v(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i] >> u[i] >> v[i];
    }
    int ans = 0;
    for (int i = n; i >= 1; i--)
    {
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            if (k == i)
            {
                break;
            }
            int pos = k + 1;
            if (pos >= l[j] && pos <= r[j])
            {
                continue;
            }

            int revPos = i - pos + 1;
            if (revPos >= u[j] && revPos <= v[j])
            {
                continue;
            }
            k++;
        }

        if (k == i)
        {
            ans = i;
            break;
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