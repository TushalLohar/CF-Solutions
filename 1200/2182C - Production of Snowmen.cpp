#include<bits/stdc++.h>
using namespace std;
int a[5010],b[5010],c[5010];
int main(){
	int t,n,x,y;
	bool fx,fy;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++)cin>>b[i];
		for(int i=1;i<=n;i++)cin>>c[i];
		x=y=0;
		for(int k=0;k<n;k++){
			fx=fy=1;
			for(int i=1;i<=n;i++){
				int j=(i+k-1)%n+1;
				if(b[j]<=a[i])fx=0;
				if(c[j]<=b[i])fy=0;
			}
			if(fx)x++;
			if(fy)y++;
		}
		cout<<(long long)x*y*n<<"\n";
	}
	return 0;
}