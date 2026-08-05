#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		int ans=0;
		for(int i=0;i<n;i++) ans+=max(a[i],a[(i+1)%n]);
		ans-=*max_element(a.begin(),a.end());
		cout<<ans<<"\n";
	}
	return 0;
}