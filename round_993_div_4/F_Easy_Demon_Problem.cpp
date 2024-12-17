
/*
    --> Ankit singh sisodya
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

#define debug(...) 42
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
#include "algo.h";
#endif

std::mt19937_64 rng{std::chrono::steady_clock::now().time_since_epoch().count()};

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a(n + 1, 0ll), b(m + 1, 0ll);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= m; ++i)
        cin >> b[i];
    set<int> pres, avail;
    int suma = accumulate(a.begin() + 1, a.end(), 0ll);
    int sumb = accumulate(b.begin() + 1, b.end(), 0ll);
    for (int i = 1; i <= n; ++i)
        pres.insert(suma - a[i]);
    for (int i = 1; i <= m; ++i)
        avail.insert(sumb - b[i]);
    int sum = 0;
    for (int i = 1; i <= n; ++i)
        sum += a[i] * sumb;

    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        auto check = [&](int xx, int yy)
        {
            if (xx * yy != x)
                return false;
            if (pres.find(xx) != pres.end() && avail.find(yy) != avail.end())
                return true;
            return false;
        };
        for (int i = 1; i * i <= abs(x); ++i)
        {
            if (abs(x) % i)
                continue;
            int fac1 = i, fac2 = abs(x) / i;

            if (check(fac1, fac2) || check(-fac1, -fac2) || check(-fac1, fac2) || check(fac1, -fac2))
            {
                cout << "YES\n";
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO\n";
        }
    }
}

signed main()
{
    fastio();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}
