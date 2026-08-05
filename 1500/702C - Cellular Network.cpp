#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> city(n);
    vector<long long> tower(m);

    for (int i = 0; i < n; i++) cin >> city[i];
    for (int i = 0; i < m; i++) cin >> tower[i];

    long long ans = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {

        while (j + 1 < m &&
               abs(city[i] - tower[j + 1]) <= abs(city[i] - tower[j])) {
            j++;
        }

        ans = max(ans, abs(city[i] - tower[j]));
    }

    cout << ans << '\n';
}