 
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
    cin >> t;
	while (t--) {
        int n;
        cin >> n;
		string s;
        cin >> s;
		int la = 0, ra = 0, lb = 0, rb = 0;
        long long a = 0, b = 0;
		for (char c : s) {
            if (c == 'a') ra++;
            else rb++;
        }
		for (char c : s) {
            if (c == 'a') {
                la++;
                ra--;
                a += min(lb, rb);
            } 
			else {
                lb++;
                rb--;
                b += min(la, ra);
            }
        }
		cout << min(a, b) << '\n';
    }
	return 0;
}