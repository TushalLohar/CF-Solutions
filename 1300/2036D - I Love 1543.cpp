#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<string>s(n);
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		int ans=0;
		int d=min(n,m)/2;
		for(int i=0;i<d;i++){
			string t="";
			for(int j=i;j<m-1-i;j++){
				t+=s[i][j];
			}
			for(int j=i;j<n-1-i;j++){
				t+=s[j][m-1-i];
			}
			for(int j=m-1-i;j>i;j--){
				t+=s[n-1-i][j];
			}
			for(int j=n-i-1;j>i;j--){
				t+=s[j][i];
			}
			t+=t;
			for(int j=0;j<t.size()/2;j++){
				ans+=(t.substr(j,4)=="1543");
			}
		}
		cout<<ans<<"\n";
	}
}