
#include <bits/stdc++.h>
#define int long long
using namespace std;

#define debug(...) 42
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
#include "debugging.h";
#endif

void solve()
{
    int k, l, r, p, q;
    cin >> k >> l >> r >> p >> q;

    int ans = 0;

    for (int n = 0; n <= 32; n++)
    {

        if (pow(k, n) > q)
            break;

        int strt = (p + pow(k, n) - 1) / pow(k, n);
        int end = q / pow(k, n);

        if (min(end, r) >= max(strt, l))
            ans += min(end, r) - max(strt, l) + 1;
    }

    cout << ans << endl;
}

signed main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}