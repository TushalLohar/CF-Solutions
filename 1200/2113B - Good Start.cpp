#include <bits/stdc++.h>
using namespace std;
int t,n,m,a,b,x1,y11,x2,y2;
int main(){
	cin>>t;
	while (t--){
		cin>>n>>m>>a>>b>>x1>>y11>>x2>>y2;
		cout<<((x1!=x2 && abs(x2-x1)%a==0)||(y11!=y2 && abs(y2-y11)%b==0)?"YES\n":"NO\n");
	}
}