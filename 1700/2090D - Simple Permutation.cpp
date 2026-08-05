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
int is_prime(int k){
	for(int i=2;i*i<=k;i++) if(k%i==0) return 0;
	return 1;
}

void solve() {
    int n;
	cin>>n;
	int s=n/2;
	while(is_prime(s)==0) s--;
	cout<<s<<" ";
	for(int i=1;i<s;i++) cout<<s+i<<" "<<s-i<<" ";
	for(int i=2*s;i<=n;i++)cout<<i<<" ";
	cout<<"\n";
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