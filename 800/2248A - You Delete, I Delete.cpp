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
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0')
        {
            continue;
        }
        string alice = s;
        alice.erase(i, 1);

        string best_bob = "";
        for (int j = 0; j < alice.size(); j++)
        {
            if (alice[j] != '1')
            {
                continue;
            }
            string bob = alice;
            bob.erase(j, 1);

            if (best_bob == "" || bob < best_bob)
                best_bob = bob;
        }

        if (ans == "" || best_bob > ans)
            ans = best_bob;
    }

    cout << ans <<endl;
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