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

    int ans = 0;

    vector<int> nums(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> nums[i];

    vector<vector<int>> mini_end(n + 1, vector<int>(n + 2, 1e9));
    vector<vector<int>> max_start(n + 1, vector<int>(n + 2, -1));

    vector<int> frequency(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        fill(frequency.begin(), frequency.end(), 0);

        int mini = n + 1;
        int maxi = 0;
        int diffrent = 0;

        for (int j = i; j <= n; j++)
        {
            int x = nums[j];

            if (frequency[x]++ == 0)
                diffrent++;

            mini = min(mini, x);
            maxi = max(maxi, x);

            int len = j - i + 1;

            if (diffrent == len && maxi - mini + 1 == len)
            {
                mini_end[len][mini] =
                    min(mini_end[len][mini], j);

                max_start[len][mini] =
                    max(max_start[len][mini], i);
            }
        }
    }

    for (int len = n / 2; len >= 1; len--)
    {
        bool check = false;

        for (int mini = 1; mini + len <= n; mini++)
        {
            if (mini_end[len][mini] == (int)1e9 ||
                mini_end[len][mini + len] == (int)1e9)
                continue;

            int mini_end_1 = mini_end[len][mini];
            int max_start_1 = max_start[len][mini];

            int mini_end_2 = mini_end[len][mini + len];
            int max_start_2 = max_start[len][mini + len];

            if (mini_end_1 < max_start_2 ||
                mini_end_2 < max_start_1)
            {
                check = true;
                break;
            }
        }

        if (check)
        {
            ans = len;
            break;
        }
    }

    cout << ans << '\n';
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