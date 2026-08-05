#include <bits/stdc++.h>
using namespace std;

int main() {

    int v;
    cin >> v;

    vector<int> cost(10);

    for(int i = 1; i <= 9; i++) {
        cin >> cost[i];
    }

    int mn = *min_element(cost.begin() + 1, cost.end());

    int length = v / mn;

    if(length == 0) {
        cout << -1;
        return 0;
    }

    string ans = "";

    for(int pos = 0; pos < length; pos++) {

        for(int digit = 9; digit >= 1; digit--) {

            int remain = v - cost[digit];

            if(remain >= (length - pos - 1) * mn) {

                ans += (digit + '0');
                v -= cost[digit];
                break;
            }
        }
    }

    cout << ans;
}