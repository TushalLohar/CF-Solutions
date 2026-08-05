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

const int MOD = 998244353;
const ll INF = 1e18;

ll power_function(ll a , ll b){
    ll result =1;
    while(b){
        if(b&1){
            result= result*a%MOD;
        }
            a= a*a%MOD;
            b>>=1;
        
    }
    return result;

}

void solve() {
    ll n , m , r ,c;
    cin>>n>>m>>r>>c;
    ll x=(r-1)*m;
    ll y=(c-1)*n;

    ll free= x+y-(r-1)*(c-1);

    cout<<power_function(2 , free)<<endl;;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}