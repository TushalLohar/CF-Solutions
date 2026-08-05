 
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--) {
		int n,a=0,b=0,c=0,sum=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(x==1) a++;
			else if(x>1) b+=x/2-1,c++,sum+=x;
		}
		int ans=sum+min(a,b)+(c==1&&a>b);
		cout<<(ans<3?0:ans)<<"\n";
	}
	return 0;
}
 