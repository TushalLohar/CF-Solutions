#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
	while(t--){
        int n;
        cin >> n;
		int res = 0;
		for(int i = 3; i <= 2 * n - 1; i += 2){
            int x;
            cout << "? " << i << " " << i + 1 <<"\n";
            cin >> x;
			if(x == 1) res = i;
		}
		if(res == 0){
            int x;
			cout << "? " << 1 << " " << 3 <<"\n";
            cin >> x;
            if(x == 1) res = 1;
			cout << "? " << 1 << " " << 4 <<"\n";
            cin >> x;
            if(x == 1) res = 1;
			if(res == 0) res = 2;
        }
		cout << "! " << res <<"\n";
    }
	return 0;
}