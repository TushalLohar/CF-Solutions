#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <unordered_set>
#include <set>
#include <string>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <map>
#include <chrono>
#include <bitset>
#include <iomanip>
#include <numeric>
#include <math.h>
using namespace std;
 
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> pre(n, 0);
        pre[0] = abs(a[0]);
        for (long long i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + abs(a[i]);
        }
        vector<long long> suf(n+1, 0);
        suf[n-1] = a[n-1];
        for (long long i = n - 2; i >= 0; i--) {
            suf[i] = suf[i + 1] + a[i];
        }
        long long maxx = suf[0];
        long long idx = -1;
        for (long long i = 1; i < n; i++) {
            if(a[i] <= 0){
                continue;
            }
            long long temp = pre[i - 1] + suf[i + 1] - a[i];
            if (temp > maxx) {
                maxx = temp;
                idx = i;
            }
        }
 
        if(idx == -1){
            cout << 0 << endl;
            continue;
        }
        vector<long long> ans;
        for(long long i = idx-1; i >= 0; i--){
            if(ans.size()%2 == 1){
                a[i] = -a[i];
            }
            if(a[i] > 0){
                ans.push_back(i+1);
            }
        }
        ans.push_back(idx+1);
        cout << ans.size() << endl;
        for(long long i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
 
    return 0;
}