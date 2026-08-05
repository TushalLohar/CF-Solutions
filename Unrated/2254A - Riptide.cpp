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
    int a, b, c;
    cin >> a >> b >> c;
    int rounds = 0;
    while (a != b && b != c && a != c)
    {
        int mx = max({a, b, c});
        int mn = min({a, b, c});

        if (a == mx)
        {
            a--;
        }
        else if (b == mx)
        {
            b--;
        }
        else
        {
            c--;
        }

        if (a == mn)
        {
            a++;
        }
        else if (b == mn)
        {
            b++;
        }
        else
        {
            c++;
        }

        rounds++;
    }

    cout << rounds << endl;
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