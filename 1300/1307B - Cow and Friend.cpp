#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+10;
int n,x,a[N];
void solve() {
	cin>>n>>x;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) 
		if(a[i]==x) {
			cout<<1<<"\n";
			return;
		}
	sort(a+1,a+n+1);
	if(a[n]>x) cout<<2<<"\n";
	else {
		int c=0;
		if(x%a[n]) c=1;
		int ans=x/a[n]+c;
		cout<<ans<<"\n";
	}
}
int main() {
	int t;
    cin>>t;
	while(t--) solve();
	return 0;
}