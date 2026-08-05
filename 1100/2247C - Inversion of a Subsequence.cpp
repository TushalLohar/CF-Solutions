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

    vector<int> nums_a(n), nums_b(n);
    bool a_all_zeros = true;
    bool b_all_ones = true;
    int k1 = 0, k0 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums_a[i];
        if (nums_a[i] == 1)
        {
            a_all_zeros = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cin >> nums_b[i];
        if (nums_b[i] == 0)
        {
            b_all_ones = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (nums_a[i] == 1 && nums_b[i] == 0)
        {
            k1++;
        }
        if (nums_a[i] == 0 && nums_b[i] == 1)
        {
            k0++;
        }
    }
    if (k1 == 0 && k0 == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (k1 % 2 == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (k1 > 0)
    {
        cout << 2 << endl;
        return;
    }

    if (a_all_zeros || b_all_ones)
    {
        cout << -1 << endl;
        return;
    }

    cout << 2 << endl;
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