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
    int n, q;
    cin >> n >> q;
    string s, t;
    cin >> s >> t;
    vector<int> c_1_0(n + 1, 0);
    vector<int> c_1_1(n + 1, 0);
    vector<int> c_0_0(n + 1, 0);
    vector<int> c_0_1(n + 1, 0);

    for (int i = 0; i < n; ++i){
        c_0_0[i + 1] = c_0_0[i] + (s[i] == '0' && t[i] == '0');
        c_0_1[i + 1] = c_0_1[i] + (s[i] == '0' && t[i] == '1');
        c_1_0[i + 1] = c_1_0[i] + (s[i] == '1' && t[i] == '0');
        c_1_1[i + 1] = c_1_1[i] + (s[i] == '1' && t[i] == '1');
    }

    for (int i = 0; i < q; ++i){
        int l, r;
        cin >> l >> r;
        int count0 = c_0_0[r] - c_0_0[l - 1];
        int count1 = c_0_1[r] - c_0_1[l - 1];
        int count1_0 = c_1_0[r] - c_1_0[l - 1];
        int count11 = c_1_1[r] - c_1_1[l - 1];
        if (count0 + count11 >= abs(count1 - count1_0)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
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