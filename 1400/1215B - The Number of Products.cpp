#include <bits/stdc++.h>
using namespace std;
 
void solve() {
		int n;
		cin >> n;
 
		long long even=1,odd=0;
		long long pos=0,neg=0;
		int parity=0;
 
		for(int i=0;i<n;i++) {
				int x;
				cin >> x;
 
				if(x<0) {
						parity^=1;
				}
 
				if(parity==0) {
						pos+=even;
						neg+=odd;
						even++;
				}
				else {
						pos+=odd;
						neg+=even;
						odd++;
				}
		}
 
		cout<<neg<<" "<<pos<<"\n";
}
 
int main() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
 
		solve();
}