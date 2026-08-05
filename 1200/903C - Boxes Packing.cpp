#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int count = 1;
    int mx = 1;

    for(int i = 1; i < n; i++)
    {
        if(a[i] == a[i-1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        mx = max(mx, count);
    }

    cout << mx << endl;
}