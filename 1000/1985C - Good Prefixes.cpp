#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t,n,a,mx,ans;
    long long sum;    
    cin>>t;
    while(t--){
		cin>>n;
		mx=ans=sum=0;
		while(n--){
			cin>>a;sum+=a;
			mx=max(mx,a);
			if(sum-mx==mx) ans++;
		}
		cout<<ans<<"\n";
    }
    return 0;
}