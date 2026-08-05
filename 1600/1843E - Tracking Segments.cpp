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

bool check(int nums_size, int nums_segments,vector<int>queries,vector<pair<int,int>>segments,int num_qeuries  )
{
    vector<int> nums(nums_size, 0);
    for (int i = 0; i <num_qeuries; i++)
    {
        nums[queries[i]]= 1;
    }

    vector<int> prefix(nums_size);
    prefix[0]=nums[0];
    for (int i = 1; i <nums_size; i++)
    {
        prefix[i] = prefix[i - 1] + nums[i];
    }
    for(int i=0; i<nums_segments;i++){
        int l = segments[i].first;
        int r= segments[i].second;
        int segmentSize= r-l+1;
        int numsOnes=prefix[r]-(l>0?prefix[l-1]:0);
        if(numsOnes>segmentSize/2){
            return true;
        }


    }
    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> segments(m);
    for (int i = 0; i <m; i++)
    {
        cin >> segments[i].first >> segments[i].second;
        segments[i].first--;
        segments[i].second--;
    }

    int q;
    cin >> q;
    
    vector<int> queries(q);
    for (auto &i : queries)
    {
        cin >> i;
        i--;
        
    }

    int low = 1;
    int high = q;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(check(n, m, queries,segments,mid)){
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans << endl;
    
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