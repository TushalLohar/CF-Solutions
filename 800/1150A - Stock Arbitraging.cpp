#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
	int n,m,r,s,t;
	int a=INT_MAX,b=INT_MIN; 
	cin>>n>>m>>r;
	while(n--) {
		cin>>s, 
		a=min(a,s);
	}
    while(m--){
		cin>>t,
		b=max(b,t);
	}
    cout<<(b>a?(r/a)*b+r%a:r);
}