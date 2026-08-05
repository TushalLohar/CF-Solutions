#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// ---------- FAST IO ----------
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

// ---------- TYPES ----------
#define endl '\n'
#define ll long long
#define ld long double

// ---------- SHORTCUTS ----------
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second

// ---------- CONSTANTS ----------
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        int n , m;
        cin>>n>>m;

        vector<vector<ll>> matrix(n , vector<ll>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>matrix[i][j];
            }
        }

        ll ans =0;
        for(int col=0;col<m;col++){
            vector<ll>col_nums;

            for(int row=0;row<n;row++){
                col_nums.push_back(matrix[row][col]);
            }

            sort(col_nums.begin(),col_nums.end());
            ll prefix_sum=0;

            for(int i=0;i<n;i++){
                ans+= 1LL * i*col_nums[i]-prefix_sum;

                prefix_sum+=col_nums[i];
            }


        }

        cout<<ans<<endl;


        

    }

    return 0;
}