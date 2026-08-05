#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int len = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] > s[i % len])
        {
            break;
        }

        if (s[i] < s[i % len])
        {
            len = i + 1;
        }
    }

    string prefix = s.substr(0, len);

    string ans;

    while ((int)ans.size() < k)
    {
        ans += prefix;
    }

    ans.resize(k);

    cout << ans << '\n';

    return 0;
}