 
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int x=a*b;
		bool ok=false;
		for(int i=a+1;i<=c;i++){
			int y=x/__gcd(x,i);
			y=d/y*y;
			if(y>b){
				cout<<i<<" "<<y<<"\n";
				ok=true;
				break;
			}
		}
		if(!ok) cout<<"-1 -1\n";
	}
	return 0;
}