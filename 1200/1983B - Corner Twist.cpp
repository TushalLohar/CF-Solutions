#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool solve(){
	ll n,m;
	char a[520][520];
	char b[520][520];
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	for(int i=0;i<n;i++){
		ll ansa=0;
		ll ansb=0;
		for(int j=0;j<m;j++){
			ansa+=a[i][j]-'0';
			ansb+=b[i][j]-'0'; 
		}
		if(ansa%3!=ansb%3) return false;
	}
	for(int i=0;i<m;i++){
		ll val=0;
		ll cnt=0;
		for(int j=0;j<n;j++){
			val+=a[j][i]-'0';
			cnt+=b[j][i]-'0';
		}
		if(val%3!=cnt%3) return false;
	}
	return true;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		if(solve()) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
	return 0;
}