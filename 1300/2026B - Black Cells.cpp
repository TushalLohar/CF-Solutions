 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t,n,a[10005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		ll ans;
		for(int i=1;i<=n;i++) cin>>a[i];
		if(n%2){
			ans=1e18;
			for(int i=1;i<=n;i++){
				ll s=1;
				for(int j=1;j<i;j+=2) s=max(s,a[j+1]-a[j]);
				for(int j=i+1;j<=n;j+=2) s=max(s,a[j+1]-a[j]);
				ans=min(ans,s);
			}
		}
		else{
			ans=1;
			for(int i=1;i<=n;i+=2) ans=max(ans,a[i+1]-a[i]);
		}
		cout<<ans<<"\n";
	}
	return 0;
}