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
typedef vector<int> vi;

const int MOD = 1e9 + 7;
const ll INF = 1e18;
const ll LINF = 1e18;
const vi primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};


void solve() {
     int n; cin>>n;
    vi a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    vi ca(n);
    map<int, int> mp;
    int nc = 1;
    for(int i = 0; i<n; i++){
        for(int p : primes){
            if(a[i]%p == 0){
                if(mp.find(p) == mp.end()) mp[p] = nc++;
                ca[i] = mp[p];
                break;
            }
        }
    }
    cout<<mp.size()<<endl;
    for(int i= 0; i<n; i++) cout<<ca[i]<<(i == n-1 ? "" : " ");
    cout<<endl;
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