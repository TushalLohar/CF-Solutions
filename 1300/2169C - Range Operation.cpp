#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
        int n;
		cin >> n;
		long long sum = 0, mn = 0, ans = 0;
		for(long long i = 1; i <=n; i++){
			int x;
			cin >> x;
			sum += x;
			long long c = (i) * (i + 1) - sum;
			mn = min(mn, c);
			ans = max(ans, c - mn);
		}
		cout << sum + ans << "\n";
	}
}
  