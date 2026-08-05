#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long a,b,c,d;
		cin>>b>>c>>d;
		a=b^d;
		if((a|b)-(a&c)==d) cout<<a<<"\n";
		else cout<<"-1\n";
	}
	return 0;
}