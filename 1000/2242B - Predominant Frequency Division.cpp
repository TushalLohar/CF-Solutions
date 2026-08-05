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
    vector<int> prefix_1(n), prefix_2(n);
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];

        int value_1 = (nums[i] == 1 ? 1 : -1);
        int value_2 = (nums[i] == 3 ? -1 : 1);

        prefix_1[i] = value_1 + (i ? prefix_1[i - 1] : 0);
        prefix_2[i] = value_2 + (i ? prefix_2[i - 1] : 0);
    }

    const int INF = 1e9;
    int min_prefix = INF;
    bool ans = false;

    for (int j = 1; j <= n - 2; j++)
    {
        int i = j - 1;
        if (prefix_1[i] >= 0)
        {
            min_prefix = min(min_prefix, prefix_2[i]);
        }

        if (min_prefix != INF && prefix_2[j] >= min_prefix)
        {
            ans = true;
            break;
        }
    }

    cout << (ans ? "YES" : "NO") << endl;
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