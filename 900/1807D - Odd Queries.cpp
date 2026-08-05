#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
    while(t--){
		int n, q;
		cin>>n>>q;
        int a[n+1];
        a[0]=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			a[i]+=a[i-1];
		}
		while(q--){
			int l, r, k;
			cin>>l>>r>>k;
            if((a[n]-a[r]+a[l-1]+k*(r-l+1))&1) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
    return 0;
}