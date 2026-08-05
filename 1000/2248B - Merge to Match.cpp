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

void solve(){
    int n, m;
    cin >> n >> m;
    vector<ll> nums_1(n), nums_2(m);
    for (int i = 0; i < n; i++){
        cin >> nums_1[i];
    }
    for (int i = 0; i < m; i++){
        cin >> nums_2[i];
    }
    sort(all(nums_1));
    sort(all(nums_2));
    bool ans = true;
    if (n < 2 * m) {
        ans = false;
    }
    if(ans){
        for (int i = 0; i < m; i++){
            if (nums_1[i] > nums_2[i]){
                ans = false;
                break;
            }
        }
    }
    if(ans){
        for (int i = 0; i < m; i++){
            if (nums_1[n - m + i] < nums_2[i]){
            ans = false;
                break;
            }
        }
    }
    if(ans){
        cout<<"YES"<< endl;
    }
    else{
        cout<<"NO"<<endl;
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