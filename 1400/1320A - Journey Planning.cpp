#include <bits/stdc++.h>
using namespace std;
 
void solve() {
		int n;
		cin >> n;
 
		map<long long,long long> mp;
 
		for(int i=1;i<=n;i++) {
				long long b;
				cin >> b;
				mp[i-b]+=b;
		}
 
		long long ans=0;
 
		for(auto x:mp) {
				ans=max(ans,x.second);
		}
 
		cout<<ans<<"\n";
}
 
int main() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
 
		solve();
}