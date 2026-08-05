#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n,m,x,y;
	cin>>t;
	while(t--) {
		cin>>n>>m>>x>>y;
		m*=2;
		while(--n) {
			cin>>x>>y;
			m+=x+y;
		}
		cout<<m*2<<"\n";
	}
}