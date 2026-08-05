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

using Row = vector<ll>;
using Matrix = vector<Row>;
 
const ll mod = 1e9 + 7;
 
Matrix mul(Matrix a, Matrix b)
{
    ll n = a.size(), m = a[0].size(), k = b[0].size();
    Matrix res(n, Row(k));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int o = 0; o < m; o++)
            {
                res[i][j] += a[i][o] * b[o][j];
                res[i][j] %= mod;
            }
        }
    }
    return res;
}
 
Matrix matPower(Matrix a, ll b)
{
    ll n = a.size();
    Matrix res(n, Row(n));
    for (ll i = 0; i < n; i++)
    {
        res[i][i] = 1;
    }
    while (b)
    {
        if (b & 1)
        {
            res = mul(res, a);
        }
        a = mul(a, a);
        b /= 2;
    }
    return res;
}
 
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<tuple<ll, ll, ll>> l(n);
    Matrix S(1, Row(16));
    S[0][0] = 1;
    for(auto &[a, b, c] : l)
    {
        cin >> a >> b >> c;
        Matrix T(16, Row(16));
        for(ll i = 0; i <= c; i++)
        {
            for(ll x = i-1; x <= i+1 && x <= c; x++)
            {
                if (x >= 0)
                {
                    T[x][i] += 1;
                }
            }
        }
        if (k > b)
        {
            T = matPower(T, b-a);
            S = mul(S, T);
        }
        else if (k >= 0 && k <= b)
        {
            T = matPower(T, k-a);
            S = mul(S, T);
        }
    }
    cout << S[0][0];
}
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;


    while (t--) {
        solve();
    }

    return 0;
}