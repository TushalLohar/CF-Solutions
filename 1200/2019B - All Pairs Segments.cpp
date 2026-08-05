#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n,q,i;
		map<long long,long long> m;
		cin >> n >> q;
		long long a[n+1], b;
		for(i=1;i<=n;i++) cin >> a[i];
		for(i=1;i<=n;i++) m[(i-1)*(n-i)+n-1]++;
		for(i=1;i<n;i++) m[i*(n-i)] += a[i+1]-a[i]-1;
		for(i=0;i<q;i++){
			cin >> b;
			cout << m[b] << ' ';
		}
		cout << '\n';
	}
}
 