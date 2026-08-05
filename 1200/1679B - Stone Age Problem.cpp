#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, q;
    cin >> n >> q;
 
    vector<long long> a(n + 1), vis(n + 1, 0);
 
    long long sum = 0;
 
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
 
    long long last = 0;
    long long lastTime = -1;
    long long timer = 0;
 
    while (q--)
    {
        timer++;
 
        int t;
        cin >> t;
 
        if (t == 1)
        {
            int i;
            long long x;
            cin >> i >> x;
 
            long long old;
 
            if (vis[i] > lastTime)
                old = a[i];
            else
                old = last;
 
            sum -= old;
            sum += x;
 
            a[i] = x;
            vis[i] = timer;
 
            cout << sum << '\n';
        }
        else
        {
            long long x;
            cin >> x;
 
            last = x;
            lastTime = timer;
            sum = 1LL * n * x;
 
            cout << sum << '\n';
        }
    }
 
    return 0;
}