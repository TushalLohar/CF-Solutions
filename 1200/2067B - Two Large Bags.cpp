#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int>a(1001,0);
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[x]++;
	}
	int sum=0;
	for(int i=1;i<1000;i++){
		sum+=a[i];
		if(sum==0) continue;
		else if(sum==1){
			cout<<"No"<<"\n";
			return;
		}
		else if(sum>=2) sum-=2;
	}
	cout<<"Yes"<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();
}