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
    int n, c;
    cin >> n >> c;
    vector<int> nums_1(n);
    vector<int> nums_2(n);
    for (int i = 0; i < n; i++)
        cin >> nums_1[i];
    for (int i = 0; i < n; i++)
        cin >> nums_2[i];
    int ans = INT_MAX;
    int sum = 0;
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (nums_1[i] < nums_2[i])
        {
            check = false;
        }
        sum += nums_1[i] - nums_2[i];
    }
    if (check)
    {
        ans = min(ans, sum);
    }
    sort(all(nums_1));
    sort(all(nums_2));

    check = true;
    sum = c;
    for (int i = 0; i < n; i++)
    {
        if (nums_1[i] < nums_2[i])
        {
            check = false;
        }
        sum += nums_1[i] - nums_2[i];
    }
    if (check)
        ans = min(ans, sum);

    if (ans == INT_MAX)
        cout << -1 << endl;
    else
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
