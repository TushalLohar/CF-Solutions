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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    string ans(n, '0');

    vector<int> opening;
    vector<int> match(n, -1);
    vector<int> unmatch;
    vector<pair<int, int>> valid;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            opening.push_back(i);
        }
        else
        {
            if (!opening.empty())
            {
                int j = opening.back();
                opening.pop_back();

                match[i] = j;
                match[j] = i;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' && match[i] == -1)
            unmatch.push_back(i);
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' && match[i] != -1)
            valid.push_back({i, match[i]});
    }

    int discard = min((int)valid.size(), k);

    for (int i = 0; i < discard; i++)
    {
        int l = valid[i].first;
        int r = valid[i].second;

        bool seen = false;

        for (int pos : unmatch)
        {
            if (pos < l)
            {
                seen = true;
                break;
            }
        }

        if (seen)
            ans[r] = '1';
        else
            ans[l] = '1';
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